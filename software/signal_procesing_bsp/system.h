/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'procesador'
 * SOPC Builder design path: ../../procesador.sopcinfo
 *
 * Generated: Tue Feb 14 15:26:31 ART 2023
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00043020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x13
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x13
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00043020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x13
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x13
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_FIFO
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_PLL_RECONFIG
#define __SLAVE_TEMPLATE


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x421d0
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x421d0
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x421d0
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "procesador"


/*
 * divisor_clock configuration
 *
 */

#define ALT_MODULE_CLASS_divisor_clock altera_avalon_pio
#define DIVISOR_CLOCK_BASE 0x42190
#define DIVISOR_CLOCK_BIT_CLEARING_EDGE_REGISTER 0
#define DIVISOR_CLOCK_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DIVISOR_CLOCK_CAPTURE 0
#define DIVISOR_CLOCK_DATA_WIDTH 32
#define DIVISOR_CLOCK_DO_TEST_BENCH_WIRING 0
#define DIVISOR_CLOCK_DRIVEN_SIM_VALUE 0
#define DIVISOR_CLOCK_EDGE_TYPE "NONE"
#define DIVISOR_CLOCK_FREQ 50000000
#define DIVISOR_CLOCK_HAS_IN 0
#define DIVISOR_CLOCK_HAS_OUT 1
#define DIVISOR_CLOCK_HAS_TRI 0
#define DIVISOR_CLOCK_IRQ -1
#define DIVISOR_CLOCK_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DIVISOR_CLOCK_IRQ_TYPE "NONE"
#define DIVISOR_CLOCK_NAME "/dev/divisor_clock"
#define DIVISOR_CLOCK_RESET_VALUE 0
#define DIVISOR_CLOCK_SPAN 16
#define DIVISOR_CLOCK_TYPE "altera_avalon_pio"


/*
 * enable configuration
 *
 */

#define ALT_MODULE_CLASS_enable altera_avalon_pio
#define ENABLE_BASE 0x42170
#define ENABLE_BIT_CLEARING_EDGE_REGISTER 0
#define ENABLE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ENABLE_CAPTURE 0
#define ENABLE_DATA_WIDTH 1
#define ENABLE_DO_TEST_BENCH_WIRING 0
#define ENABLE_DRIVEN_SIM_VALUE 0
#define ENABLE_EDGE_TYPE "NONE"
#define ENABLE_FREQ 50000000
#define ENABLE_HAS_IN 0
#define ENABLE_HAS_OUT 1
#define ENABLE_HAS_TRI 0
#define ENABLE_IRQ -1
#define ENABLE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ENABLE_IRQ_TYPE "NONE"
#define ENABLE_NAME "/dev/enable"
#define ENABLE_RESET_VALUE 0
#define ENABLE_SPAN 16
#define ENABLE_TYPE "altera_avalon_pio"


/*
 * fifo0_32_bit configuration
 *
 */

#define ALT_MODULE_CLASS_fifo0_32_bit altera_avalon_fifo
#define FIFO0_32_BIT_AVALONMM_AVALONMM_DATA_WIDTH 32
#define FIFO0_32_BIT_AVALONMM_AVALONST_DATA_WIDTH 32
#define FIFO0_32_BIT_BASE 0x421a8
#define FIFO0_32_BIT_BITS_PER_SYMBOL 32
#define FIFO0_32_BIT_CHANNEL_WIDTH 0
#define FIFO0_32_BIT_ERROR_WIDTH 0
#define FIFO0_32_BIT_FIFO_DEPTH 2048
#define FIFO0_32_BIT_IRQ -1
#define FIFO0_32_BIT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FIFO0_32_BIT_NAME "/dev/fifo0_32_bit"
#define FIFO0_32_BIT_SINGLE_CLOCK_MODE 1
#define FIFO0_32_BIT_SPAN 8
#define FIFO0_32_BIT_SYMBOLS_PER_BEAT 1
#define FIFO0_32_BIT_TYPE "altera_avalon_fifo"
#define FIFO0_32_BIT_USE_AVALONMM_READ_SLAVE 1
#define FIFO0_32_BIT_USE_AVALONMM_WRITE_SLAVE 0
#define FIFO0_32_BIT_USE_AVALONST_SINK 1
#define FIFO0_32_BIT_USE_AVALONST_SOURCE 0
#define FIFO0_32_BIT_USE_BACKPRESSURE 1
#define FIFO0_32_BIT_USE_IRQ 1
#define FIFO0_32_BIT_USE_PACKET 0
#define FIFO0_32_BIT_USE_READ_CONTROL 0
#define FIFO0_32_BIT_USE_REGISTER 0
#define FIFO0_32_BIT_USE_WRITE_CONTROL 0


/*
 * fifo0_64_bit_down configuration
 *
 */

#define ALT_MODULE_CLASS_fifo0_64_bit_down altera_avalon_fifo
#define FIFO0_64_BIT_DOWN_AVALONMM_AVALONMM_DATA_WIDTH 32
#define FIFO0_64_BIT_DOWN_AVALONMM_AVALONST_DATA_WIDTH 32
#define FIFO0_64_BIT_DOWN_BASE 0x421c0
#define FIFO0_64_BIT_DOWN_BITS_PER_SYMBOL 32
#define FIFO0_64_BIT_DOWN_CHANNEL_WIDTH 0
#define FIFO0_64_BIT_DOWN_ERROR_WIDTH 0
#define FIFO0_64_BIT_DOWN_FIFO_DEPTH 2048
#define FIFO0_64_BIT_DOWN_IRQ -1
#define FIFO0_64_BIT_DOWN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FIFO0_64_BIT_DOWN_NAME "/dev/fifo0_64_bit_down"
#define FIFO0_64_BIT_DOWN_SINGLE_CLOCK_MODE 1
#define FIFO0_64_BIT_DOWN_SPAN 8
#define FIFO0_64_BIT_DOWN_SYMBOLS_PER_BEAT 1
#define FIFO0_64_BIT_DOWN_TYPE "altera_avalon_fifo"
#define FIFO0_64_BIT_DOWN_USE_AVALONMM_READ_SLAVE 1
#define FIFO0_64_BIT_DOWN_USE_AVALONMM_WRITE_SLAVE 0
#define FIFO0_64_BIT_DOWN_USE_AVALONST_SINK 1
#define FIFO0_64_BIT_DOWN_USE_AVALONST_SOURCE 0
#define FIFO0_64_BIT_DOWN_USE_BACKPRESSURE 1
#define FIFO0_64_BIT_DOWN_USE_IRQ 1
#define FIFO0_64_BIT_DOWN_USE_PACKET 0
#define FIFO0_64_BIT_DOWN_USE_READ_CONTROL 0
#define FIFO0_64_BIT_DOWN_USE_REGISTER 0
#define FIFO0_64_BIT_DOWN_USE_WRITE_CONTROL 0


/*
 * fifo0_64_bit_up configuration
 *
 */

#define ALT_MODULE_CLASS_fifo0_64_bit_up altera_avalon_fifo
#define FIFO0_64_BIT_UP_AVALONMM_AVALONMM_DATA_WIDTH 32
#define FIFO0_64_BIT_UP_AVALONMM_AVALONST_DATA_WIDTH 32
#define FIFO0_64_BIT_UP_BASE 0x421c8
#define FIFO0_64_BIT_UP_BITS_PER_SYMBOL 32
#define FIFO0_64_BIT_UP_CHANNEL_WIDTH 0
#define FIFO0_64_BIT_UP_ERROR_WIDTH 0
#define FIFO0_64_BIT_UP_FIFO_DEPTH 2048
#define FIFO0_64_BIT_UP_IRQ -1
#define FIFO0_64_BIT_UP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FIFO0_64_BIT_UP_NAME "/dev/fifo0_64_bit_up"
#define FIFO0_64_BIT_UP_SINGLE_CLOCK_MODE 1
#define FIFO0_64_BIT_UP_SPAN 8
#define FIFO0_64_BIT_UP_SYMBOLS_PER_BEAT 1
#define FIFO0_64_BIT_UP_TYPE "altera_avalon_fifo"
#define FIFO0_64_BIT_UP_USE_AVALONMM_READ_SLAVE 1
#define FIFO0_64_BIT_UP_USE_AVALONMM_WRITE_SLAVE 0
#define FIFO0_64_BIT_UP_USE_AVALONST_SINK 1
#define FIFO0_64_BIT_UP_USE_AVALONST_SOURCE 0
#define FIFO0_64_BIT_UP_USE_BACKPRESSURE 1
#define FIFO0_64_BIT_UP_USE_IRQ 1
#define FIFO0_64_BIT_UP_USE_PACKET 0
#define FIFO0_64_BIT_UP_USE_READ_CONTROL 0
#define FIFO0_64_BIT_UP_USE_REGISTER 0
#define FIFO0_64_BIT_UP_USE_WRITE_CONTROL 0


/*
 * fifo1_32_bit configuration
 *
 */

#define ALT_MODULE_CLASS_fifo1_32_bit altera_avalon_fifo
#define FIFO1_32_BIT_AVALONMM_AVALONMM_DATA_WIDTH 32
#define FIFO1_32_BIT_AVALONMM_AVALONST_DATA_WIDTH 32
#define FIFO1_32_BIT_BASE 0x421a0
#define FIFO1_32_BIT_BITS_PER_SYMBOL 32
#define FIFO1_32_BIT_CHANNEL_WIDTH 0
#define FIFO1_32_BIT_ERROR_WIDTH 0
#define FIFO1_32_BIT_FIFO_DEPTH 2048
#define FIFO1_32_BIT_IRQ -1
#define FIFO1_32_BIT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FIFO1_32_BIT_NAME "/dev/fifo1_32_bit"
#define FIFO1_32_BIT_SINGLE_CLOCK_MODE 1
#define FIFO1_32_BIT_SPAN 8
#define FIFO1_32_BIT_SYMBOLS_PER_BEAT 1
#define FIFO1_32_BIT_TYPE "altera_avalon_fifo"
#define FIFO1_32_BIT_USE_AVALONMM_READ_SLAVE 1
#define FIFO1_32_BIT_USE_AVALONMM_WRITE_SLAVE 0
#define FIFO1_32_BIT_USE_AVALONST_SINK 1
#define FIFO1_32_BIT_USE_AVALONST_SOURCE 0
#define FIFO1_32_BIT_USE_BACKPRESSURE 1
#define FIFO1_32_BIT_USE_IRQ 1
#define FIFO1_32_BIT_USE_PACKET 0
#define FIFO1_32_BIT_USE_READ_CONTROL 0
#define FIFO1_32_BIT_USE_REGISTER 0
#define FIFO1_32_BIT_USE_WRITE_CONTROL 0


/*
 * fifo1_64_bit_down configuration
 *
 */

#define ALT_MODULE_CLASS_fifo1_64_bit_down altera_avalon_fifo
#define FIFO1_64_BIT_DOWN_AVALONMM_AVALONMM_DATA_WIDTH 32
#define FIFO1_64_BIT_DOWN_AVALONMM_AVALONST_DATA_WIDTH 32
#define FIFO1_64_BIT_DOWN_BASE 0x421b0
#define FIFO1_64_BIT_DOWN_BITS_PER_SYMBOL 32
#define FIFO1_64_BIT_DOWN_CHANNEL_WIDTH 0
#define FIFO1_64_BIT_DOWN_ERROR_WIDTH 0
#define FIFO1_64_BIT_DOWN_FIFO_DEPTH 2048
#define FIFO1_64_BIT_DOWN_IRQ -1
#define FIFO1_64_BIT_DOWN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FIFO1_64_BIT_DOWN_NAME "/dev/fifo1_64_bit_down"
#define FIFO1_64_BIT_DOWN_SINGLE_CLOCK_MODE 1
#define FIFO1_64_BIT_DOWN_SPAN 8
#define FIFO1_64_BIT_DOWN_SYMBOLS_PER_BEAT 1
#define FIFO1_64_BIT_DOWN_TYPE "altera_avalon_fifo"
#define FIFO1_64_BIT_DOWN_USE_AVALONMM_READ_SLAVE 1
#define FIFO1_64_BIT_DOWN_USE_AVALONMM_WRITE_SLAVE 0
#define FIFO1_64_BIT_DOWN_USE_AVALONST_SINK 1
#define FIFO1_64_BIT_DOWN_USE_AVALONST_SOURCE 0
#define FIFO1_64_BIT_DOWN_USE_BACKPRESSURE 1
#define FIFO1_64_BIT_DOWN_USE_IRQ 1
#define FIFO1_64_BIT_DOWN_USE_PACKET 0
#define FIFO1_64_BIT_DOWN_USE_READ_CONTROL 0
#define FIFO1_64_BIT_DOWN_USE_REGISTER 0
#define FIFO1_64_BIT_DOWN_USE_WRITE_CONTROL 0


/*
 * fifo1_64_bit_up configuration
 *
 */

#define ALT_MODULE_CLASS_fifo1_64_bit_up altera_avalon_fifo
#define FIFO1_64_BIT_UP_AVALONMM_AVALONMM_DATA_WIDTH 32
#define FIFO1_64_BIT_UP_AVALONMM_AVALONST_DATA_WIDTH 32
#define FIFO1_64_BIT_UP_BASE 0x421b8
#define FIFO1_64_BIT_UP_BITS_PER_SYMBOL 32
#define FIFO1_64_BIT_UP_CHANNEL_WIDTH 0
#define FIFO1_64_BIT_UP_ERROR_WIDTH 0
#define FIFO1_64_BIT_UP_FIFO_DEPTH 2048
#define FIFO1_64_BIT_UP_IRQ -1
#define FIFO1_64_BIT_UP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FIFO1_64_BIT_UP_NAME "/dev/fifo1_64_bit_up"
#define FIFO1_64_BIT_UP_SINGLE_CLOCK_MODE 1
#define FIFO1_64_BIT_UP_SPAN 8
#define FIFO1_64_BIT_UP_SYMBOLS_PER_BEAT 1
#define FIFO1_64_BIT_UP_TYPE "altera_avalon_fifo"
#define FIFO1_64_BIT_UP_USE_AVALONMM_READ_SLAVE 1
#define FIFO1_64_BIT_UP_USE_AVALONMM_WRITE_SLAVE 0
#define FIFO1_64_BIT_UP_USE_AVALONST_SINK 1
#define FIFO1_64_BIT_UP_USE_AVALONST_SOURCE 0
#define FIFO1_64_BIT_UP_USE_BACKPRESSURE 1
#define FIFO1_64_BIT_UP_USE_IRQ 1
#define FIFO1_64_BIT_UP_USE_PACKET 0
#define FIFO1_64_BIT_UP_USE_READ_CONTROL 0
#define FIFO1_64_BIT_UP_USE_REGISTER 0
#define FIFO1_64_BIT_UP_USE_WRITE_CONTROL 0


/*
 * finalizacion configuration
 *
 */

#define ALT_MODULE_CLASS_finalizacion altera_avalon_pio
#define FINALIZACION_BASE 0x42160
#define FINALIZACION_BIT_CLEARING_EDGE_REGISTER 0
#define FINALIZACION_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FINALIZACION_CAPTURE 0
#define FINALIZACION_DATA_WIDTH 1
#define FINALIZACION_DO_TEST_BENCH_WIRING 0
#define FINALIZACION_DRIVEN_SIM_VALUE 0
#define FINALIZACION_EDGE_TYPE "NONE"
#define FINALIZACION_FREQ 50000000
#define FINALIZACION_HAS_IN 1
#define FINALIZACION_HAS_OUT 0
#define FINALIZACION_HAS_TRI 0
#define FINALIZACION_IRQ -1
#define FINALIZACION_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FINALIZACION_IRQ_TYPE "NONE"
#define FINALIZACION_NAME "/dev/finalizacion"
#define FINALIZACION_RESET_VALUE 0
#define FINALIZACION_SPAN 16
#define FINALIZACION_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x421d0
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * parameters configuration
 *
 */

#define ALT_MODULE_CLASS_parameters slave_template
#define PARAMETERS_BASE 0x41800
#define PARAMETERS_IRQ -1
#define PARAMETERS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PARAMETERS_NAME "/dev/parameters"
#define PARAMETERS_SPAN 2048
#define PARAMETERS_TYPE "slave_template"


/*
 * parameters_1 configuration
 *
 */

#define ALT_MODULE_CLASS_parameters_1 slave_template
#define PARAMETERS_1_BASE 0x41000
#define PARAMETERS_1_IRQ -1
#define PARAMETERS_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PARAMETERS_1_NAME "/dev/parameters_1"
#define PARAMETERS_1_SPAN 2048
#define PARAMETERS_1_TYPE "slave_template"


/*
 * parameters_2 configuration
 *
 */

#define ALT_MODULE_CLASS_parameters_2 slave_template
#define PARAMETERS_2_BASE 0x40800
#define PARAMETERS_2_IRQ -1
#define PARAMETERS_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PARAMETERS_2_NAME "/dev/parameters_2"
#define PARAMETERS_2_SPAN 2048
#define PARAMETERS_2_TYPE "slave_template"


/*
 * parameters_3 configuration
 *
 */

#define ALT_MODULE_CLASS_parameters_3 slave_template
#define PARAMETERS_3_BASE 0x40000
#define PARAMETERS_3_IRQ -1
#define PARAMETERS_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PARAMETERS_3_NAME "/dev/parameters_3"
#define PARAMETERS_3_SPAN 2048
#define PARAMETERS_3_TYPE "slave_template"


/*
 * pll_reconfigurar configuration
 *
 */

#define ALT_MODULE_CLASS_pll_reconfigurar altera_pll_reconfig
#define PLL_RECONFIGURAR_BASE 0x42000
#define PLL_RECONFIGURAR_IRQ -1
#define PLL_RECONFIGURAR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PLL_RECONFIGURAR_NAME "/dev/pll_reconfigurar"
#define PLL_RECONFIGURAR_SPAN 256
#define PLL_RECONFIGURAR_TYPE "altera_pll_reconfig"


/*
 * program_memory configuration
 *
 */

#define ALT_MODULE_CLASS_program_memory altera_avalon_onchip_memory2
#define PROGRAM_MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define PROGRAM_MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define PROGRAM_MEMORY_BASE 0x0
#define PROGRAM_MEMORY_CONTENTS_INFO ""
#define PROGRAM_MEMORY_DUAL_PORT 0
#define PROGRAM_MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define PROGRAM_MEMORY_INIT_CONTENTS_FILE "procesador_program_memory"
#define PROGRAM_MEMORY_INIT_MEM_CONTENT 1
#define PROGRAM_MEMORY_INSTANCE_ID "NONE"
#define PROGRAM_MEMORY_IRQ -1
#define PROGRAM_MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PROGRAM_MEMORY_NAME "/dev/program_memory"
#define PROGRAM_MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define PROGRAM_MEMORY_RAM_BLOCK_TYPE "AUTO"
#define PROGRAM_MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define PROGRAM_MEMORY_SINGLE_CLOCK_OP 0
#define PROGRAM_MEMORY_SIZE_MULTIPLE 1
#define PROGRAM_MEMORY_SIZE_VALUE 150000
#define PROGRAM_MEMORY_SPAN 150000
#define PROGRAM_MEMORY_TYPE "altera_avalon_onchip_memory2"
#define PROGRAM_MEMORY_WRITABLE 1


/*
 * reset configuration
 *
 */

#define ALT_MODULE_CLASS_reset altera_avalon_pio
#define RESET_BASE 0x42180
#define RESET_BIT_CLEARING_EDGE_REGISTER 0
#define RESET_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RESET_CAPTURE 0
#define RESET_DATA_WIDTH 1
#define RESET_DO_TEST_BENCH_WIRING 0
#define RESET_DRIVEN_SIM_VALUE 0
#define RESET_EDGE_TYPE "NONE"
#define RESET_FREQ 0
#define RESET_HAS_IN 0
#define RESET_HAS_OUT 1
#define RESET_HAS_TRI 0
#define RESET_IRQ -1
#define RESET_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RESET_IRQ_TYPE "NONE"
#define RESET_NAME "/dev/reset"
#define RESET_RESET_VALUE 0
#define RESET_SPAN 16
#define RESET_TYPE "altera_avalon_pio"


/*
 * result0_32_bit configuration
 *
 */

#define ALT_MODULE_CLASS_result0_32_bit altera_avalon_pio
#define RESULT0_32_BIT_BASE 0x42110
#define RESULT0_32_BIT_BIT_CLEARING_EDGE_REGISTER 0
#define RESULT0_32_BIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RESULT0_32_BIT_CAPTURE 0
#define RESULT0_32_BIT_DATA_WIDTH 32
#define RESULT0_32_BIT_DO_TEST_BENCH_WIRING 0
#define RESULT0_32_BIT_DRIVEN_SIM_VALUE 0
#define RESULT0_32_BIT_EDGE_TYPE "NONE"
#define RESULT0_32_BIT_FREQ 50000000
#define RESULT0_32_BIT_HAS_IN 1
#define RESULT0_32_BIT_HAS_OUT 0
#define RESULT0_32_BIT_HAS_TRI 0
#define RESULT0_32_BIT_IRQ -1
#define RESULT0_32_BIT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RESULT0_32_BIT_IRQ_TYPE "NONE"
#define RESULT0_32_BIT_NAME "/dev/result0_32_bit"
#define RESULT0_32_BIT_RESET_VALUE 0
#define RESULT0_32_BIT_SPAN 16
#define RESULT0_32_BIT_TYPE "altera_avalon_pio"


/*
 * result0_64_bit_down configuration
 *
 */

#define ALT_MODULE_CLASS_result0_64_bit_down altera_avalon_pio
#define RESULT0_64_BIT_DOWN_BASE 0x42140
#define RESULT0_64_BIT_DOWN_BIT_CLEARING_EDGE_REGISTER 0
#define RESULT0_64_BIT_DOWN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RESULT0_64_BIT_DOWN_CAPTURE 0
#define RESULT0_64_BIT_DOWN_DATA_WIDTH 32
#define RESULT0_64_BIT_DOWN_DO_TEST_BENCH_WIRING 0
#define RESULT0_64_BIT_DOWN_DRIVEN_SIM_VALUE 0
#define RESULT0_64_BIT_DOWN_EDGE_TYPE "NONE"
#define RESULT0_64_BIT_DOWN_FREQ 50000000
#define RESULT0_64_BIT_DOWN_HAS_IN 1
#define RESULT0_64_BIT_DOWN_HAS_OUT 0
#define RESULT0_64_BIT_DOWN_HAS_TRI 0
#define RESULT0_64_BIT_DOWN_IRQ -1
#define RESULT0_64_BIT_DOWN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RESULT0_64_BIT_DOWN_IRQ_TYPE "NONE"
#define RESULT0_64_BIT_DOWN_NAME "/dev/result0_64_bit_down"
#define RESULT0_64_BIT_DOWN_RESET_VALUE 0
#define RESULT0_64_BIT_DOWN_SPAN 16
#define RESULT0_64_BIT_DOWN_TYPE "altera_avalon_pio"


/*
 * result0_64_bit_up configuration
 *
 */

#define ALT_MODULE_CLASS_result0_64_bit_up altera_avalon_pio
#define RESULT0_64_BIT_UP_BASE 0x42150
#define RESULT0_64_BIT_UP_BIT_CLEARING_EDGE_REGISTER 0
#define RESULT0_64_BIT_UP_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RESULT0_64_BIT_UP_CAPTURE 0
#define RESULT0_64_BIT_UP_DATA_WIDTH 32
#define RESULT0_64_BIT_UP_DO_TEST_BENCH_WIRING 0
#define RESULT0_64_BIT_UP_DRIVEN_SIM_VALUE 0
#define RESULT0_64_BIT_UP_EDGE_TYPE "NONE"
#define RESULT0_64_BIT_UP_FREQ 50000000
#define RESULT0_64_BIT_UP_HAS_IN 1
#define RESULT0_64_BIT_UP_HAS_OUT 0
#define RESULT0_64_BIT_UP_HAS_TRI 0
#define RESULT0_64_BIT_UP_IRQ -1
#define RESULT0_64_BIT_UP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RESULT0_64_BIT_UP_IRQ_TYPE "NONE"
#define RESULT0_64_BIT_UP_NAME "/dev/result0_64_bit_up"
#define RESULT0_64_BIT_UP_RESET_VALUE 0
#define RESULT0_64_BIT_UP_SPAN 16
#define RESULT0_64_BIT_UP_TYPE "altera_avalon_pio"


/*
 * result1_32_bit configuration
 *
 */

#define ALT_MODULE_CLASS_result1_32_bit altera_avalon_pio
#define RESULT1_32_BIT_BASE 0x42100
#define RESULT1_32_BIT_BIT_CLEARING_EDGE_REGISTER 0
#define RESULT1_32_BIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RESULT1_32_BIT_CAPTURE 0
#define RESULT1_32_BIT_DATA_WIDTH 32
#define RESULT1_32_BIT_DO_TEST_BENCH_WIRING 0
#define RESULT1_32_BIT_DRIVEN_SIM_VALUE 0
#define RESULT1_32_BIT_EDGE_TYPE "NONE"
#define RESULT1_32_BIT_FREQ 50000000
#define RESULT1_32_BIT_HAS_IN 1
#define RESULT1_32_BIT_HAS_OUT 0
#define RESULT1_32_BIT_HAS_TRI 0
#define RESULT1_32_BIT_IRQ -1
#define RESULT1_32_BIT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RESULT1_32_BIT_IRQ_TYPE "NONE"
#define RESULT1_32_BIT_NAME "/dev/result1_32_bit"
#define RESULT1_32_BIT_RESET_VALUE 0
#define RESULT1_32_BIT_SPAN 16
#define RESULT1_32_BIT_TYPE "altera_avalon_pio"


/*
 * result1_64_bit_down configuration
 *
 */

#define ALT_MODULE_CLASS_result1_64_bit_down altera_avalon_pio
#define RESULT1_64_BIT_DOWN_BASE 0x42120
#define RESULT1_64_BIT_DOWN_BIT_CLEARING_EDGE_REGISTER 0
#define RESULT1_64_BIT_DOWN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RESULT1_64_BIT_DOWN_CAPTURE 0
#define RESULT1_64_BIT_DOWN_DATA_WIDTH 32
#define RESULT1_64_BIT_DOWN_DO_TEST_BENCH_WIRING 0
#define RESULT1_64_BIT_DOWN_DRIVEN_SIM_VALUE 0
#define RESULT1_64_BIT_DOWN_EDGE_TYPE "NONE"
#define RESULT1_64_BIT_DOWN_FREQ 50000000
#define RESULT1_64_BIT_DOWN_HAS_IN 1
#define RESULT1_64_BIT_DOWN_HAS_OUT 0
#define RESULT1_64_BIT_DOWN_HAS_TRI 0
#define RESULT1_64_BIT_DOWN_IRQ -1
#define RESULT1_64_BIT_DOWN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RESULT1_64_BIT_DOWN_IRQ_TYPE "NONE"
#define RESULT1_64_BIT_DOWN_NAME "/dev/result1_64_bit_down"
#define RESULT1_64_BIT_DOWN_RESET_VALUE 0
#define RESULT1_64_BIT_DOWN_SPAN 16
#define RESULT1_64_BIT_DOWN_TYPE "altera_avalon_pio"


/*
 * result1_64_bit_up configuration
 *
 */

#define ALT_MODULE_CLASS_result1_64_bit_up altera_avalon_pio
#define RESULT1_64_BIT_UP_BASE 0x42130
#define RESULT1_64_BIT_UP_BIT_CLEARING_EDGE_REGISTER 0
#define RESULT1_64_BIT_UP_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RESULT1_64_BIT_UP_CAPTURE 0
#define RESULT1_64_BIT_UP_DATA_WIDTH 32
#define RESULT1_64_BIT_UP_DO_TEST_BENCH_WIRING 0
#define RESULT1_64_BIT_UP_DRIVEN_SIM_VALUE 0
#define RESULT1_64_BIT_UP_EDGE_TYPE "NONE"
#define RESULT1_64_BIT_UP_FREQ 50000000
#define RESULT1_64_BIT_UP_HAS_IN 1
#define RESULT1_64_BIT_UP_HAS_OUT 0
#define RESULT1_64_BIT_UP_HAS_TRI 0
#define RESULT1_64_BIT_UP_IRQ -1
#define RESULT1_64_BIT_UP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RESULT1_64_BIT_UP_IRQ_TYPE "NONE"
#define RESULT1_64_BIT_UP_NAME "/dev/result1_64_bit_up"
#define RESULT1_64_BIT_UP_RESET_VALUE 0
#define RESULT1_64_BIT_UP_SPAN 16
#define RESULT1_64_BIT_UP_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
