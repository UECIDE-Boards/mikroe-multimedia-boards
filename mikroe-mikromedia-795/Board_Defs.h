/************************************************************************/
/*																		*/
/*	Board_Defs.h --	Default Board Customization Declarations			*/
/*																		*/
/************************************************************************/
/*	Author: Gene Apperson												*/
/*	Copyright 2011, Digilent. All rights reserved						*/
/************************************************************************/
/*  File Description:													*/
/*																		*/
/* This file contains the board specific declartions and data structure	*/
/* to customize the chipKIT MPIDE for use with a generic board using a	*/
/* PIC32 part in a 100-pin package.										*/
/*																		*/
/* This code is based on earlier work:									*/
/*		Copyright (c) 2010, 2011 by Mark Sproul							*/
/*		Copyright (c) 2005, 2006 by David A. Mellis						*/
/*																		*/
/************************************************************************/
/*  Revision History:													*/
/*																		*/
/*	10/07/2011(GeneA): Created											*/
/*	11/28/2011(GeneA): Moved data definitions and configuration			*/
/*		functions to Board_Data.c										*/
/*	11/29/2011(GeneA): Moved int priority definitions to System_Defs.h	*/
/*																		*/
/************************************************************************/
//*	This library is free software; you can redistribute it and/or
//*	modify it under the terms of the GNU Lesser General Public
//*	License as published by the Free Software Foundation; either
//*	version 2.1 of the License, or (at your option) any later version.
//*	
//*	This library is distributed in the hope that it will be useful,
//*	but WITHOUT ANY WARRANTY; without even the implied warranty of
//*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//*	Lesser General Public License for more details.
//*	
//*	You should have received a copy of the GNU Lesser General
//*	Public License along with this library; if not, write to the
//*	Free Software Foundation, Inc., 59 Temple Place, Suite 330,
//*	Boston, MA  02111-1307  USA
/************************************************************************/

#if !defined(BOARD_DEFS_H)
#define BOARD_DEFS_H

#include <inttypes.h>

/* ------------------------------------------------------------ */
/*				Public Board Declarations						*/
/* ------------------------------------------------------------ */
/* The following define symbols that can be used in a sketch to
** refer to periperhals on the board generically.
*/

#define	_BOARD_NAME_	"mikroe-mikromedia-795"

/* Define the peripherals available on the board.
*/
//#define MMC_SS			  	6 //RA6
#define	NUM_DIGITAL_PINS	112
#define	NUM_ANALOG_PINS		16
#define NUM_OC_PINS			5
#define	NUM_IC_PINS			5
#define	NUM_TCK_PINS		5
#define	NUM_INT_PINS		5

#define	NUM_SERIAL_PORTS	4//2
#define	NUM_SPI_PORTS		1
#define	NUM_I2C_PORTS		2//1

#define NUM_DSPI_PORTS		1
#define NUM_DTWI_PORTS		2

/* Define I/O devices on the board.
*/
#define	NUM_LED				3
#define NUM_BTN				0
#define	NUM_SWT				0
#define NUM_SERVO			0

/* ------------------------------------------------------------ */
/*						LED Declarations						*/
/* ------------------------------------------------------------ */

/* Define the pin numbers for the LEDs
*/
#define	PIN_LED1		13 // NOT ON THIS BOARD
#define PIN_LED_RED		49 //RD1 49
#define PIN_LED_GREEN	50 //RD2 50
#define PIN_LED_BLUE	51 //RD3 51 see Board_data

/* ------------------------------------------------------------ */
/*					Button Declarations							*/
/* ------------------------------------------------------------ */

/* No buttons on this board.
*/

/* ------------------------------------------------------------ */
/*					Switch Declarations							*/
/* ------------------------------------------------------------ */

/* No switches on this board.
*/

/* ------------------------------------------------------------ */
/*					Servo Pin Declarations						*/
/* ------------------------------------------------------------ */

/* No servo connectors on this board.
*/

/* ------------------------------------------------------------ */
/*					Timer Pin Declarations						*/
/* ------------------------------------------------------------ */

#define PIN_OC1		48
#define	PIN_OC2		49
#define	PIN_OC3		50
#define	PIN_OC4		51
#define	PIN_OC5		52

#define PIN_IC1		56
#define PIN_IC2		57
#define PIN_IC3		58
#define PIN_IC4		59
#define	PIN_IC5		60

#define	PIN_TCK1	46
#define	PIN_TCK2	33
#define	PIN_TCK3	34
#define	PIN_TCK4	35
#define	PIN_TCK5	36

/* ------------------------------------------------------------ */
/*					Interrupt Pin Declarations					*/
/* ------------------------------------------------------------ */

#define	PIN_INT0	48
#define	PIN_INT1	72
#define PIN_INT2	73
#define	PIN_INT3	14
#define	PIN_INT4	15

/* ------------------------------------------------------------ */
/*					SPI Pin Declarations						*/
/* ------------------------------------------------------------ */
/* These symbols are defined for compatibility with the original
** SPI library and the original pins_arduino.h. SPI2 is used for
** the default SPI port as it's pin numbers stay constant on all
** devices.
*/
const static uint8_t SS   = 105;		// PIC32 SS1 6
const static uint8_t MOSI =	104;		// PIC32 SDO1 48
const static uint8_t MISO = 103;		// PIC32 SDI1 36
const static uint8_t SCK  = 102;		// PIC32 SCK1 58

/* The Digilent DSPI library uses these ports.
*/
#define	PIN_DSPI0_SS	105

/* ------------------------------------------------------------ */
/*					Analog Pins									*/
/* ------------------------------------------------------------ */
/* Define symbols for accessing the analog pins. This table is
** used to map an analog pin number to the corresponding digital
** pin number.
*/
/*
#define	A0		17
#define	A1		38
#define A2		58
#define A3		59
#define A4		60
#define A5		61
#define A6		91
#define A7		92
//#define A8		
#define A9		28
#define A10		29
//#define A11		27
//#define	A12		28
//#define	A13		29
#define	A14		66
#define	A15		67
*/
/* ------------------------------------------------------------ */
/*					Change Notice Pins							*/
/* ------------------------------------------------------------ */
/* These define the pin numbers for the various change notice
** pins.
*/
#define	PIN_CN0		46
#define	PIN_CN1		45
#define	PIN_CN2		16
#define	PIN_CN3		17
#define	PIN_CN4		18
#define	PIN_CN5		19
#define	PIN_CN6		20
#define	PIN_CN7		21
#define	PIN_CN8		102
#define	PIN_CN9		103
#define	PIN_CN10	104
#define	PIN_CN11	105
#define	PIN_CN12	31
#define	PIN_CN13	52
#define	PIN_CN14	53
#define	PIN_CN15	54
#define	PIN_CN16	55
#define	PIN_CN17	84
#define	PIN_CN18	85
#define	PIN_CN19	61
#define	PIN_CN20	62
#define	PIN_CN21	63

/* ------------------------------------------------------------ */
/*					Pin Mapping Macros							*/
/* ------------------------------------------------------------ */
/* This section contains the definitions for pin mapping macros that
   are being redefined for this board variant.
*/

// This board variant doesn't need to change any of the default
// defintions.

/* ------------------------------------------------------------ */
/*					Data Definitions							*/
/* ------------------------------------------------------------ */

/* The following declare externals to access the pin mapping
** tables.
*/

#if !defined(OPT_BOARD_DATA)

extern const uint32_t	port_to_tris_PGM[];
extern const uint8_t	digital_pin_to_port_PGM[];
extern const uint16_t	digital_pin_to_bit_mask_PGM[];
extern const uint16_t	digital_pin_to_timer_PGM[];

#if defined(_NOT_USED_)
extern const uint8_t 	digital_pin_to_analog_PGM[];
#endif

#if defined(_NOT_USED_)
extern const uint8_t	analog_pin_to_channel_PGM[];
#endif

#endif

/* ------------------------------------------------------------ */
/*				Internal Declarations							*/
/* ------------------------------------------------------------ */
/* The following declarations are used to map peripherals for	*/
/* the core and libraries and to provide configuration options	*/
/* for the core. They are not normally needed by a user sketch.	*/
/* ------------------------------------------------------------ */

#if defined(OPT_BOARD_INTERNAL)

/* ------------------------------------------------------------ */
/*				Core Configuration Declarations					*/
/* ------------------------------------------------------------ */
/*																*/
/* These are conditional compilation switches that control the	*/
/* board core configuration functions. These functions provide	*/
/* hooks that can call from some of the core functions into		*/
/* functions defined below that can be used to extend or		*/
/* replace the default behavior of the core function. To use	*/
/* this, enter the appropriate code into the appropriate		*/
/* function skeleton below and then set the appropriate switch	*/
/* value to 1. This will cause the configuration function to be	*/
/* compiled into the build and will cause the code to call the	*/
/* hook function to be compiled into the core function.			*/
/*																*/
/* ------------------------------------------------------------ */

#define	OPT_BOARD_INIT			0	//board needs no special init code
#define	OPT_BOARD_DIGITAL_IO	0	//board does not extend digital i/o functions
#define	OPT_BOARD_ANALOG_READ	0	//board does not extend analogRead
#define	OPT_BOARD_ANALOG_WRITE	0	//board does not extend analogWrite

/* ------------------------------------------------------------ */
/*					Serial Port Declarations					*/
/* ------------------------------------------------------------ */

/* Serial port 0 uses UART1
*/
#define	_SER0_BASE		_UART1_BASE_ADDRESS
#define	_SER0_IRQ		_UART1_ERR_IRQ
#define	_SER0_VECTOR	_UART_1_VECTOR
#define	_SER0_IPL_ISR	_UART1_IPL_ISR
#define	_SER0_IPL		_UART1_IPL_IPC
#define	_SER0_SPL		_UART1_SPL_IPC

/* Serial port 1 uses UART2 Tx pin 50, RF5, Rx pin 49, RF4
*/
#define	_SER1_BASE		_UART2_BASE_ADDRESS
#define	_SER1_IRQ		_UART2_ERR_IRQ
#define	_SER1_VECTOR	_UART_2_VECTOR
#define	_SER1_IPL_ISR	_UART2_IPL_ISR
#define	_SER1_IPL		_UART2_IPL_IPC
#define	_SER1_SPL		_UART2_SPL_IPC

/* Serial port 2 uses UART3 Tx pin 12, RG8, Rx pin 11, RG7
*/
#define	_SER2_BASE		_UART3_BASE_ADDRESS
#define	_SER2_IRQ		_UART3_ERR_IRQ
#define	_SER2_VECTOR	_UART_3_VECTOR
#define	_SER2_IPL_ISR	_UART3_IPL_ISR
#define	_SER2_IPL		_UART3_IPL_IPC
#define	_SER2_SPL		_UART3_SPL_IPC

/* Serial port 3 uses UART4 Tx pin 48, RD15, Rx pin 47, RD14
*/
#define	_SER3_BASE		_UART4_BASE_ADDRESS
#define	_SER3_IRQ		_UART4_ERR_IRQ
#define	_SER3_VECTOR	_UART_4_VECTOR
#define	_SER3_IPL_ISR	_UART4_IPL_ISR
#define	_SER3_IPL		_UART4_IPL_IPC
#define	_SER3_SPL		_UART4_SPL_IPC
/* ------------------------------------------------------------ */
/*					SPI Port Declarations						*/
/* ------------------------------------------------------------ */

/* The default SPI port uses SPI2. The pins for SPI2 stay the
** same on all PIC32 devices. The pins for SPI1 move around,
** and the ports beyond SPI2 aren't defined on some devices.
*/
#define    _SPI_BASE       _SPI1_BASE_ADDRESS
#define    _SPI_ERR_IRQ    _SPI1_ERR_IRQ
#define    _SPI_RX_IRQ     _SPI1_RX_IRQ
#define    _SPI_TX_IRQ     _SPI1_TX_IRQ
#define    _SPI_VECTOR     _SPI_1_VECTOR
#define    _SPI_IPL_ISR    _SPI1_IPL_ISR
#define    _SPI_IPL        _SPI1_IPL_IPC
#define    _SPI_SPL        _SPI1_SPL_IPC

/* The Digilent DSPI library uses the same port.
*/
#define    _DSPI0_BASE         _SPI1_BASE_ADDRESS
#define    _DSPI0_ERR_IRQ      _SPI1_ERR_IRQ
#define    _DSPI0_RX_IRQ       _SPI1_RX_IRQ
#define    _DSPI0_TX_IRQ       _SPI1_TX_IRQ
#define    _DSPI0_VECTOR       _SPI_1_VECTOR
#define    _DSPI0_IPL_ISR      _SPI1_IPL_ISR
#define    _DSPI0_IPL          _SPI1_IPL_IPC
#define    _DSPI0_SPL          _SPI1_SPL_IPC

/* ------------------------------------------------------------ */
/*					I2C Port Declarations						*/
/* ------------------------------------------------------------ */

/* The standard I2C port uses I2C1 (SCL1/SDA1). These come to pins
** A4/A5 on the analog connector. It is necessary to have jumpers
** JP6/JP8 set appropriately (RG2/RG3 position) to access the I2C
** signals.
*/
#define	_TWI_BASE		_I2C2_BASE_ADDRESS
#define	_TWI_BUS_IRQ	_I2C2_BUS_IRQ
#define	_TWI_SLV_IRQ	_I2C2_SLAVE_IRQ
#define	_TWI_MST_IRQ	_I2C2_MASTER_IRQ
#define	_TWI_VECTOR		_I2C_2_VECTOR
#define	_TWI_IPL_ISR	_I2C2_IPL_ISR
#define _TWI_IPL		_I2C2_IPL_IPC
#define	_TWI_SPL		_I2C2_SPL_IPC

/* Declarations for Digilent DTWI library. DTWI0 and DTWI1 are
** connected to the 2x4 I2C daisy chain connectors. The pins for the
** other DTWI are on Pmod connectors.
**		DTWI0 is on J7, has jumperable current mirrors for pull-ups
**		DTWI1 is on J8, has fixed pullups and EEPROM
**		DTWI2 is on JE (pins 2&3), digital pins 33 (SCL) & 34 (SDA)
**		DTWI3 is on JF (pins 2&3), digital pins 41 (SCL) & 42 (SDA)
*/
#define	_DTWI0_BASE		_I2C2_BASE_ADDRESS
#define	_DTWI0_BUS_IRQ	_I2C2_BUS_IRQ
#define	_DTWI0_VECTOR	_I2C_2_VECTOR
#define	_DTWI0_IPL_ISR	_I2C2_IPL_ISR
#define	_DTWI0_IPL		_I2C2_IPL_IPC
#define	_DTWI0_SPL		_I2C2_SPL_IPC
#define _DTWI0_SCL_PIN  58 
#define _DTWI0_SDA_PIN  59

#define	_DTWI1_BASE		_I2C1_BASE_ADDRESS
#define	_DTWI1_BUS_IRQ	_I2C1_BUS_IRQ
#define	_DTWI1_VECTOR	_I2C_1_VECTOR
#define	_DTWI1_IPL_ISR	_I2C1_IPL_ISR
#define	_DTWI1_IPL		_I2C1_IPL_IPC
#define	_DTWI1_SPL		_I2C1_SPL_IPC
#define _DTWI1_SCL_PIN  55 
#define _DTWI1_SDA_PIN  56

#define	_DTWI2_BASE		_I2C3_BASE_ADDRESS
#define	_DTWI2_BUS_IRQ	_I2C3_BUS_IRQ
#define	_DTWI2_VECTOR	_I2C_3_VECTOR
#define	_DTWI2_IPL_ISR	_I2C3_IPL_ISR
#define	_DTWI2_IPL		_I2C3_IPL_IPC
#define	_DTWI2_SPL		_I2C3_SPL_IPC
#define _DTWI2_SCL_PIN  33 
#define _DTWI2_SDA_PIN  34

/* ------------------------------------------------------------ */
/*					A/D Converter Declarations					*/
/* ------------------------------------------------------------ */


/* ------------------------------------------------------------ */

#endif	// OPT_BOARD_INTERNAL

/* ------------------------------------------------------------ */

#endif	// BOARD_DEFS_H

/************************************************************************/
