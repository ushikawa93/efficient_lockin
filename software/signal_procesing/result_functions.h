/*
  result_functions.h

  Define funciones para leer los resultados del procesamiento
  Hay funciones para leer los resultados de los FIFOS de 64 bits y de 32 bits y las salidas instantanteas
  (TODO) Todas requieren que la entrada de finalizacion este en 1

*/


int* leer_fifo_32_bit(int* fifo_addr)
{
	static int resultados [2048] ;
	for(int i=0;i<2048;i++)
	{
		int muestra = *fifo_addr;
		resultados[i] = muestra;
	}
	return resultados;
}

long long* leer_fifo_64_bit(unsigned int* fifo_down_addr,unsigned int* fifo_up_addr)
{
	long unsigned res_low,res_up;

	static long long resultados [2048] ;
	for(int i=0;i<2048;i++)
	{
		res_low = *(fifo_down_addr);
		res_up = *(fifo_up_addr);
		resultados[i] = (((long long) res_up ) << 32 )| res_low;

	}
	return resultados;
}


int leer_resultado_32_bit(int* pio_addr){
	return *pio_addr;
}

long long leer_resultado_64_bit(unsigned int* pio_down_addr,unsigned int* pio_up_addr){
	long unsigned res_low,res_up;
	res_low = *(pio_down_addr);
	res_up = *(pio_up_addr);
	return (((long long) res_up ) << 32 )| res_low;;

}
