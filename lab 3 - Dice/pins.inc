/*
 * pins.inc
 *
 *  Created: 2016-11-18 11:02:58
 *   Author: Philip and Aron
 */ 

 init_pin:
	LDI TEMP, 0x00
	OUT PORTE, TEMP		;lyssna p� sp�nning (input) Vad �r DDRE h�r? 0? Betyder det att detta blir en pull-up?
	LDI TEMP, 0xFF

	OUT DDRB,TEMP		;s�tt till utg�ng
	OUT PORTB, TEMP		;s�tt till utg�ng

	OUT DDRF, TEMP		;s�tt lysdioder outputs
	LDI TEMP, 0xF0

	CBI DDRE, 6			; E6 blir ing�ng
	LDI TEMP, 0xFF
	OUT DDRD, TEMP		;s�tt ddrd till 1, ska vara utg�ngar
	//OUT PORTD, TEMP

	RET
