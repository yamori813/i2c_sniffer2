#ifndef _uart_h_
#define _uart_h_

					// size must be in range 2 .. 256
#define TX0_SIZE	256		// usable: TX0_SIZE - 1 (1 .. 255)

#define	uputs(x)	uputs_((u8*)(x))	// avoid char warning


void uputchar( u8 c );			// send byte
void uputs_( u8 *s );			// send string from SRAM
void init_uart( u16 bauddiv );


#endif
