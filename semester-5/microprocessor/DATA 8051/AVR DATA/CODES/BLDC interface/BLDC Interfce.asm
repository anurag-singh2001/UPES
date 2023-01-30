
_main:
	LDI        R27, 255
	OUT        SPL+0, R27
	LDI        R27, 0
	OUT        SPL+1, R27
	IN         R28, SPL+0
	IN         R29, SPL+1
	SBIW       R28, 1
	OUT        SPL+0, R28
	OUT        SPL+1, R29
	ADIW       R28, 1

;BLDC Interfce.c,5 :: 		void main()
;BLDC Interfce.c,7 :: 		unsigned char i=0;
;BLDC Interfce.c,8 :: 		LED_DIR = 0xFF;         // output port
	LDI        R27, 255
	OUT        DDRC+0, R27
;BLDC Interfce.c,9 :: 		LED=0x00;
	LDI        R27, 0
	OUT        PORTC+0, R27
;BLDC Interfce.c,11 :: 		while(1)
L_main0:
;BLDC Interfce.c,14 :: 		for(i=0;i<100;i++)
	LDI        R27, 0
	STD        Y+0, R27
L_main2:
	LDD        R16, Y+0
	CPI        R16, 100
	BRLO       L__main24
	JMP        L_main3
L__main24:
;BLDC Interfce.c,16 :: 		LED=0xFF;
	LDI        R27, 255
	OUT        PORTC+0, R27
;BLDC Interfce.c,17 :: 		delay_us(1000);
	LDI        R17, 11
	LDI        R16, 99
L_main5:
	DEC        R16
	BRNE       L_main5
	DEC        R17
	BRNE       L_main5
;BLDC Interfce.c,18 :: 		LED=0x00;
	LDI        R27, 0
	OUT        PORTC+0, R27
;BLDC Interfce.c,19 :: 		delay_us(19000);
	LDI        R17, 198
	LDI        R16, 102
L_main7:
	DEC        R16
	BRNE       L_main7
	DEC        R17
	BRNE       L_main7
	NOP
;BLDC Interfce.c,14 :: 		for(i=0;i<100;i++)
	LDD        R16, Y+0
	SUBI       R16, 255
	STD        Y+0, R16
;BLDC Interfce.c,20 :: 		}
	JMP        L_main2
L_main3:
;BLDC Interfce.c,22 :: 		for(i=0;i<100;i++)
	LDI        R27, 0
	STD        Y+0, R27
L_main9:
	LDD        R16, Y+0
	CPI        R16, 100
	BRLO       L__main25
	JMP        L_main10
L__main25:
;BLDC Interfce.c,24 :: 		LED=0xFF;
	LDI        R27, 255
	OUT        PORTC+0, R27
;BLDC Interfce.c,25 :: 		delay_us(1110);
	LDI        R17, 12
	LDI        R16, 135
L_main12:
	DEC        R16
	BRNE       L_main12
	DEC        R17
	BRNE       L_main12
	NOP
	NOP
;BLDC Interfce.c,26 :: 		LED=0x00;
	LDI        R27, 0
	OUT        PORTC+0, R27
;BLDC Interfce.c,27 :: 		delay_us(18890);
	LDI        R17, 197
	LDI        R16, 65
L_main14:
	DEC        R16
	BRNE       L_main14
	DEC        R17
	BRNE       L_main14
	NOP
	NOP
;BLDC Interfce.c,22 :: 		for(i=0;i<100;i++)
	LDD        R16, Y+0
	SUBI       R16, 255
	STD        Y+0, R16
;BLDC Interfce.c,28 :: 		}
	JMP        L_main9
L_main10:
;BLDC Interfce.c,30 :: 		for(i=0;i<100;i++)
	LDI        R27, 0
	STD        Y+0, R27
L_main16:
	LDD        R16, Y+0
	CPI        R16, 100
	BRLO       L__main26
	JMP        L_main17
L__main26:
;BLDC Interfce.c,32 :: 		LED=0xFF;
	LDI        R27, 255
	OUT        PORTC+0, R27
;BLDC Interfce.c,33 :: 		delay_us(1130);
	LDI        R17, 12
	LDI        R16, 189
L_main19:
	DEC        R16
	BRNE       L_main19
	DEC        R17
	BRNE       L_main19
;BLDC Interfce.c,34 :: 		LED=0x00;
	LDI        R27, 0
	OUT        PORTC+0, R27
;BLDC Interfce.c,35 :: 		delay_us(18870);
	LDI        R17, 197
	LDI        R16, 12
L_main21:
	DEC        R16
	BRNE       L_main21
	DEC        R17
	BRNE       L_main21
	NOP
;BLDC Interfce.c,30 :: 		for(i=0;i<100;i++)
	LDD        R16, Y+0
	SUBI       R16, 255
	STD        Y+0, R16
;BLDC Interfce.c,36 :: 		}
	JMP        L_main16
L_main17:
;BLDC Interfce.c,37 :: 		}
	JMP        L_main0
;BLDC Interfce.c,38 :: 		}
L_end_main:
L__main_end_loop:
	JMP        L__main_end_loop
; end of _main
