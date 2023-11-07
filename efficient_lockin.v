
module efficient_lockin(

	////////// CLK /////////
	input clk,
	
	 ///////// SW /////////
   input       [3:0]  SW,
	
	///////// KEYS ////////
	input 		[1:0] KEY,
	
	///////// LED /////////
	output		[3:0] LED,
		
	 		
	//////// Highspeed ADC_DAC //////
	 
   output 		    ADC_CLK_A,
	input    [13:0] ADC_DA,
	output			 ADC_OEB_A,
	input				 ADC_OTR_A,
	
	output			 ADC_CLK_B,
	input	 	[13:0] ADC_DB,
	output			 ADC_OEB_B,
	input				 ADC_OTR_B,
		
	output			 DAC_CLK_A,
	output   [13:0] DAC_DA,
	output			 DAC_WRT_A,
	
	output 			 DAC_CLK_B,
	output   [13:0] DAC_DB,
	output			 DAC_WRT_B,
	
	output			 DAC_MODE,
	output			 OSC_SMA_ADC4,
	output			 POWER_ON,
	output			 SMA_DAC4,
	
	//////// HPS ////////////
	output      [14:0] HPS_DDR3_ADDR,
   output      [2:0]  HPS_DDR3_BA,
   output             HPS_DDR3_CAS_N,
   output             HPS_DDR3_CKE,
   output             HPS_DDR3_CK_N,
   output             HPS_DDR3_CK_P,
   output             HPS_DDR3_CS_N,
   output      [3:0]  HPS_DDR3_DM,
   inout       [31:0] HPS_DDR3_DQ,
   inout       [3:0]  HPS_DDR3_DQS_N,
   inout       [3:0]  HPS_DDR3_DQS_P,
   output             HPS_DDR3_ODT,
   output             HPS_DDR3_RAS_N,
   output             HPS_DDR3_RESET_N,
   input              HPS_DDR3_RZQ,
   output             HPS_DDR3_WE_N,
	
	// Entradas y salidas de ADC 2308	
	output	adc_cs_n,
	output	adc_sclk,
	output	adc_din,
	input 	adc_dout
);




////////////////////////////////////////////////
// ============= Ruteo de las señales  =============
////////////////////////////////////////////////

// Posibilidades...
parameter adc_2308 = 0;
parameter adc_hs = 1;
parameter simulacion = 2;
parameter procesada_1 = 3;
parameter procesada_2 = 4;
parameter avgd_signal = 5;
parameter open = 6;


// Fuentes de señal para cada etapa del proceso

wire [31:0] fuente_procesamiento;
parameter fuente_dac = procesada_1 ;	// En realidad sería desde una look up table (parametro dentro del modulo)

parameter fuente_fifo0_32bit = adc_hs;
parameter fuente_fifo1_32bit = avgd_signal;
parameter fuente_fifo0_64bit = procesada_1;
parameter fuente_fifo1_64bit = procesada_2;

// Valores para el procesamiento:

wire [31:0] data_adc_hs = (SW[0] == 0)? data_canal_b: data_canal_a;

wire [31:0] data_in_procesamiento = (fuente_procesamiento == adc_2308)? data_adc_2308 : ((fuente_procesamiento == adc_hs)? data_adc_hs : ((fuente_procesamiento == simulacion)? datos_simulados : 0)); 
wire data_in_procesamiento_valid = (fuente_procesamiento == adc_2308)? data_adc_2308_valid : ((fuente_procesamiento == adc_hs)? data_adc_valid : ((fuente_procesamiento == simulacion)? datos_simulados_valid : 0)); 

// Valores para el DAC:

reg [31:0] data_in_dac;
reg data_in_dac_valid;

always @ (fuente_dac)
begin
	
	case (fuente_dac)
	
		adc_2308:
		begin
			data_in_dac = data_adc_2308;
			data_in_dac_valid = data_adc_2308_valid;
		end
		
		adc_hs:
		begin
			data_in_dac = data_adc_hs;
			data_in_dac_valid = data_adc_valid;
		end
		
		simulacion:
		begin
			data_in_dac = datos_simulados;
			data_in_dac_valid = datos_simulados_valid;
		end
		
		procesada_1:
		begin
			data_in_dac = data_procesada1;
			data_in_dac_valid = data_procesada1_valid;
		end
		
		procesada_2:
		begin
			data_in_dac = data_procesada2;
			data_in_dac_valid = data_procesada2_valid;
		end
		
		avgd_signal:
		begin
			data_in_dac = data_promc;
			data_in_dac_valid = data_promc_valid;
		end	
		
		open:
		begin
			data_in_dac = 0;
			data_in_dac_valid = 0;
		end
	endcase

end


// Entrada de memorias FIFO

reg [31:0] data_in_fifo0_32bit,				data_in_fifo1_32bit;

reg [63:0] data_in_fifo0_64bit,				data_in_fifo1_64bit;

reg 		  data_in_fifo0_32bit_valid,		data_in_fifo1_32bit_valid,		data_in_fifo0_64bit_valid,		data_in_fifo1_64bit_valid;

always @ (fuente_fifo0_32bit)
begin
	
	case (fuente_fifo0_32bit)
	
		adc_2308:
		begin
			data_in_fifo0_32bit = data_adc_2308;
			data_in_fifo0_32bit_valid = data_adc_2308_valid;
		end
		
		adc_hs:
		begin
			data_in_fifo0_32bit = data_adc_hs;
			data_in_fifo0_32bit_valid = data_adc_valid;
		end
		
		simulacion:
		begin
			data_in_fifo0_32bit = datos_simulados;
			data_in_fifo0_32bit_valid = datos_simulados_valid;
		end
		
		procesada_1:
		begin
			data_in_fifo0_32bit = data_procesada1;
			data_in_fifo0_32bit_valid = data_procesada1_valid;
		end
		
		procesada_2:
		begin
			data_in_fifo0_32bit = data_procesada2;
			data_in_fifo0_32bit_valid = data_procesada2_valid;
		end
		
		avgd_signal:
		begin
			data_in_fifo0_32bit = data_promc;
			data_in_fifo0_32bit_valid = data_promc_valid;
		end	
		
		open:
		begin
			data_in_fifo0_32bit = 0;
			data_in_fifo0_32bit_valid = 0;
		end
	endcase

end


always @ (fuente_fifo1_32bit)
begin
	
	case (fuente_fifo1_32bit)
	
		adc_2308:
		begin
			data_in_fifo1_32bit = data_adc_2308;
			data_in_fifo1_32bit_valid = data_adc_2308_valid;
		end
		
		adc_hs:
		begin
			data_in_fifo1_32bit = data_adc_hs;
			data_in_fifo1_32bit_valid = data_adc_valid;
		end
		
		simulacion:
		begin
			data_in_fifo1_32bit = datos_simulados;
			data_in_fifo1_32bit_valid = datos_simulados_valid;
		end
		
		procesada_1:
		begin
			data_in_fifo1_32bit = data_procesada1;
			data_in_fifo1_32bit_valid = data_procesada1_valid;
		end
		
		procesada_2:
		begin
			data_in_fifo1_32bit = data_procesada2;
			data_in_fifo1_32bit_valid = data_procesada2_valid;
		end
		
		avgd_signal:
		begin
			data_in_fifo1_32bit = data_promc;
			data_in_fifo1_32bit_valid = data_promc_valid;
		end	
		
					
		open:
		begin
			data_in_fifo1_32bit = 0;
			data_in_fifo1_32bit_valid = 0;
		end
	endcase

end


always @ (fuente_fifo0_64bit)
begin
	
	case (fuente_fifo0_64bit)
	
		adc_2308:
		begin
			data_in_fifo0_64bit = data_adc_2308;
			data_in_fifo0_64bit_valid = data_adc_2308_valid;
		end
		
		adc_hs:
		begin
			data_in_fifo0_64bit = data_adc_hs;
			data_in_fifo0_64bit_valid = data_adc_valid;
		end
		
		simulacion:
		begin
			data_in_fifo0_64bit = datos_simulados;
			data_in_fifo0_64bit_valid = datos_simulados_valid;
		end
		
		procesada_1:
		begin
			data_in_fifo0_64bit = data_procesada1;
			data_in_fifo0_64bit_valid = data_procesada1_valid;
		end
		
		procesada_2:
		begin
			data_in_fifo0_64bit = data_procesada2;
			data_in_fifo0_64bit_valid = data_procesada2_valid;
		end
		
		avgd_signal:
		begin
			data_in_fifo0_64bit = data_promc;
			data_in_fifo0_64bit_valid = data_promc_valid;
		end	
		
		open:
		begin
			data_in_fifo0_64bit = 0;
			data_in_fifo0_64bit_valid = 0;
		end
	endcase

end

always @ (fuente_fifo1_64bit)
begin
	
	case (fuente_fifo1_64bit)
	
		adc_2308:
		begin
			data_in_fifo1_64bit = data_adc_2308;
			data_in_fifo1_64bit_valid = data_adc_2308_valid;
		end
		
		adc_hs:
		begin
			data_in_fifo1_64bit = data_adc_hs;
			data_in_fifo1_64bit_valid = data_adc_valid;
		end
		
		simulacion:
		begin
			data_in_fifo1_64bit = datos_simulados;
			data_in_fifo1_64bit_valid = datos_simulados_valid;
		end
		
		procesada_1:
		begin
			data_in_fifo1_64bit = data_procesada1;
			data_in_fifo1_64bit_valid = data_procesada1_valid;
		end
		
		procesada_2:
		begin
			data_in_fifo1_64bit = data_procesada2;
			data_in_fifo1_64bit_valid = data_procesada2_valid;
		end
		
		avgd_signal:
		begin
			data_in_fifo1_64bit = data_promc;
			data_in_fifo1_64bit_valid = data_promc_valid;
		end	
		
		
		open:
		begin
			data_in_fifo1_64bit = 0;
			data_in_fifo1_64bit_valid = 0;
		end
	endcase

end




////////////////////////////////////////////////
// ============= Interfaz de control  =============
////////////////////////////////////////////////

wire enable;
	assign enable = enable_from_control && ready_to_calculate;
wire reset_n;
	assign reset_n = !reset_from_control && reset_physical;

	
wire enable_from_control;
wire clk_custom;
wire reset_from_control;
wire reset_physical = KEY[0];


// Algunos parametros reconfigurables...
wire led_test;
wire [31:0] sim_noise;
wire [31:0] M;
wire [31:0] N_ma_CALI;
wire [31:0] N_ca_CALI;
wire [31:0] N_LI;
wire seleccion_resultado;


control nios (

	 // Logica de control
	 .clk							(clk),
	 .reset_n					(reset_physical),	
	 .enable						(enable_from_control),
	 .clk_custom				(clk_custom),
	 .reset_from_control		(reset_from_control),
	 .calculo_finalizado 	(calculo_finalizado),
	 
	 // Parametros reconfigurables
	 .parameter_out_0				(fuente_procesamiento),
	 .parameter_out_1				(M),
	 .parameter_out_2				(N_ma_CALI),
	 .parameter_out_3				(N_ca_CALI),
	 .parameter_out_4				(sim_noise),
	 .parameter_out_5				(seleccion_resultado),
	 .parameter_out_6				(N_LI),
	 .parameter_out_9				(led_test),
	 
	
	 // Resultados de procesamiento de 32 bits
	 .result_0_32_bit			(data_in_fifo0_32bit),
	 .result_0_32_bit_valid	(data_in_fifo0_32bit_valid),
	
	 .result_1_32_bit			(data_in_fifo1_32bit),
	 .result_1_32_bit_valid (data_in_fifo1_32bit_valid),
	 
	 .result_0_64_bit			(data_in_fifo0_64bit),
	 .result_0_64_bit_valid	(data_in_fifo0_64bit_valid),
	 
	 .result_1_64_bit			(data_in_fifo1_64bit),
	 .result_1_64_bit_valid	(data_in_fifo1_64bit_valid),
	 
	  // Memoria DDR3 del HPS
	 .HPS_DDR3_ADDR         (HPS_DDR3_ADDR),                          //          memory.mem_a
	 .HPS_DDR3_BA           (HPS_DDR3_BA),                         //                .mem_ba
	 .HPS_DDR3_CK_P         (HPS_DDR3_CK_P),                         //                .mem_ck
	 .HPS_DDR3_CK_N         (HPS_DDR3_CK_N),                       //                .mem_ck_n
	 .HPS_DDR3_CKE          (HPS_DDR3_CKE),                        //                .mem_cke
	 .HPS_DDR3_CS_N         (HPS_DDR3_CS_N),                       //                .mem_cs_n
	 .HPS_DDR3_RAS_N        (HPS_DDR3_RAS_N),                      //                .mem_ras_n
	 .HPS_DDR3_CAS_N        (HPS_DDR3_CAS_N),                      //                .mem_cas_n
	 .HPS_DDR3_WE_N         (HPS_DDR3_WE_N),                       //                .mem_we_n
	 .HPS_DDR3_RESET_N      (HPS_DDR3_RESET_N),                    //                .mem_reset_n
	 .HPS_DDR3_DQ           (HPS_DDR3_DQ),                         //                .mem_dq
	 .HPS_DDR3_DQS_P        (HPS_DDR3_DQS_P),                        //                .mem_dqs
	 .HPS_DDR3_DQS_N        (HPS_DDR3_DQS_N),                      //                .mem_dqs_n
	 .HPS_DDR3_ODT          (HPS_DDR3_ODT),                        //                .mem_odt
	 .HPS_DDR3_DM           (HPS_DDR3_DM),                         //                .mem_dm
	 .HPS_DDR3_RZQ          (HPS_DDR3_RZQ),                      //                
                  //                
		
);


////////////////////////////////////////////////
// ====== Interfaz de datos de entrada  =========
////////////////////////////////////////////////


data_in data(

	// Entradas de control
	.reset_n(reset_n),
	.enable(enable),
	
	// Entradas de reloj
	.clk_sim(clk_custom),
	.clk_dac(clk_custom),
	.clk_adc(clk_custom),
	.clk_adc_2308(clk_custom),
		
	// Parametros de configuracion -> Podrian conectarse a el Nios o HPS si quisieramos...
	.simulation_noise_bits(sim_noise),
	.ptos_x_ciclo_sim(M),
	.metodo_ruido(0),
	.ptos_x_ciclo_dac(M),
	.sincronizar_adc_con_dac(1),
	.f_muestreo_2308(1000),
	.sel_ch_2308(0),	
	
	// Salida avalon streaming simulacion
	.lu_table_input(1),
	.simulation_data_valid(datos_simulados_valid),
	.simulation_data(datos_simulados),
	
	// Salida avalon streaming ADC
	.data_canal_a(data_canal_a),
	.data_canal_b(data_canal_b),
	.data_adc_valid(data_adc_valid),
	
	// Salida avalon streaming	ADC 2308
	.data_adc_2308_valid(data_adc_2308_valid),
	.data_adc_2308(data_adc_2308),
		
	
	// Entradas y salidas del ADC/DAC HIghSPEED
	.ADC_CLK_A(ADC_CLK_A),
	.ADC_DA(ADC_DA),
	.ADC_OEB_A(ADC_OEB_A),
	.ADC_OTR_A(ADC_OTR_A),
	
	.ADC_CLK_B(ADC_CLK_B),
	.ADC_DB(ADC_DB),
	.ADC_OEB_B(ADC_OEB_B),
	.ADC_OTR_B(ADC_OTR_B),
		
	.DAC_CLK_A(DAC_CLK_A),
	.DAC_DA(DAC_DA),
	.DAC_WRT_A(DAC_WRT_A),
	
	.DAC_CLK_B(DAC_CLK_B),
	.DAC_DB(DAC_DB),
	.DAC_WRT_B(DAC_WRT_B),
	
	.DAC_MODE(DAC_MODE),
	.OSC_SMA_ADC4(OSC_SMA_ADC4),
	.POWER_ON(POWER_ON),
	.SMA_DAC4(SMA_DAC4),
	
	// Entradas digitales para el DAC
	.digital_data_in(data_in_dac),
	.digital_data_in_valid(data_in_dac_valid),
	
	// Entradas y salidas del ADC 2308
	.adc_cs_n(adc_cs_n),
	.adc_sclk(adc_sclk),
	.adc_din(adc_din),
	.adc_dout(adc_dout)

	
);

////// Salidas de datos simulados //////
wire [31:0] datos_simulados;
wire datos_simulados_valid;

///// Salidas de los ADC HS ////////
wire [31:0] data_canal_a;
wire [31:0] data_canal_b;
wire data_adc_valid;

///// Salidas de ADC 2308 ////////
wire [31:0] data_adc_2308;
wire data_adc_2308_valid;


////////////////////////////////////////////////
// ====== Procesamiento de señal CA-LI  =========
////////////////////////////////////////////////


signal_processing_CALI signal_processing_CALI_inst(

	.clk(clk_custom),
	.reset_n(reset_n),
	.enable_gral(enable),	
	
	.bypass(0),
	
	.data_in(data_in_procesamiento),
	.data_in_valid(data_in_procesamiento_valid),
	
	.data_out1(data_procesada1_CALI),
	.data_out1_valid(data_procesada1_CALI_valid),
	
	.data_out2(data_procesada2_CALI),
	.data_out2_valid(data_procesada2_CALI_valid),
	
	.aux_signal(data_promc),
	.aux_signal_valid(data_promc_valid),
	
	.parameter_in_0(M),
	.parameter_in_1(N_ma_CALI),
	.parameter_in_2(N_ca_CALI),
	
	.ready_to_calculate(ready_to_calculate_CALI),
	.processing_finished(calculo_finalizado_CALI)

);

///// Salidas de procesamiento ////////
wire [63:0] data_procesada1_CALI,data_procesada2_CALI;
wire data_procesada1_CALI_valid,data_procesada2_CALI_valid;
wire ready_to_calculate_CALI;
wire calculo_finalizado_CALI;

///// Señal promediada coherentemente /////
wire [31:0] data_promc;
wire data_promc_valid;



////////////////////////////////////////////////
// ====== Procesamiento de señal LI  =========
////////////////////////////////////////////////


signal_processing_LI signal_processing_LI_inst(

	.clk(clk_custom),
	.reset_n(reset_n),
	.enable_gral(enable),	
	
	.bypass(0),
	
	.data_in(data_in_procesamiento),
	.data_in_valid(data_in_procesamiento_valid),
	
	.data_out1(data_procesada1_LI),
	.data_out1_valid(data_procesada1_LI_valid),
	
	.data_out2(data_procesada2_LI),
	.data_out2_valid(data_procesada2_LI_valid),
	
	.parameter_in_0(M),
	.parameter_in_1(N_LI),
	
	.ready_to_calculate(ready_to_calculate_LI),
	.processing_finished(calculo_finalizado_LI)

);



///// Salidas de procesamiento ////////
wire [63:0] data_procesada1_LI,data_procesada2_LI;
wire data_procesada1_LI_valid,data_procesada2_LI_valid;
wire ready_to_calculate_LI;
wire calculo_finalizado_LI;


/////////////////////////////////////////////////////////////////////////////
// ====== Ruteo señales de procesamiento segun seleccion_resultado  =========
/////////////////////////////////////////////////////////////////////////////

///// Salidas de procesamiento ////////
wire [63:0] data_procesada1 = (seleccion_resultado == 0)?  data_procesada1_CALI: data_procesada1_LI;
wire [63:0] data_procesada2 = (seleccion_resultado == 0)?  data_procesada2_CALI: data_procesada2_LI;
wire data_procesada1_valid = (seleccion_resultado == 0)?  data_procesada1_CALI_valid: data_procesada1_LI_valid;
wire data_procesada2_valid = (seleccion_resultado == 0)?  data_procesada2_CALI_valid: data_procesada2_LI_valid;
wire ready_to_calculate = ready_to_calculate_LI && ready_to_calculate_CALI;
wire calculo_finalizado = calculo_finalizado_LI && calculo_finalizado_CALI;


////////////////////////////////////////////////
// ====== Contador para ver si clk anda  =========
////////////////////////////////////////////////

reg [31:0] count;
always @ (posedge clk_custom)
begin
	count <= (count == 65000000)? 0 : count+1;
end

assign LED[0] = ( count > (65000000 >> 1) );


////////////////////////////////////////////////
// ====== Algunos LED para ver cositas  =========
////////////////////////////////////////////////

assign LED[3] = led_test;

assign LED[2] = calculo_finalizado;

assign LED[1] = 0;
	 
endmodule
	 