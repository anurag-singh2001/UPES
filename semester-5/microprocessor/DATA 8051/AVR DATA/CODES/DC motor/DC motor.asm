
_main:
	LDI        R27, 255
	OUT        SPL+0, R27
	LDI        R27, 0
	OUT        SPL+1, R27

;DC motor.c,6 :: 		void main()
;DC motor.c,9 :: 		MOTOR_DIR = 0xFF;
	LDI        R27, 255
	OUT        DDRD+0, R27
;DC motor.c,11 :: 		while(1)
L_main0:
;DC motor.c,13 :: 		m1=1;m2=0;
	IN         R27, PORTD+0
	SBR        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	CBR        R27, 2
	OUT        PORTD+0, R27
;DC motor.c,14 :: 		delay_ms(4000);
	LDI        R18, 163
	LDI        R17, 87
	LDI        R16, 3
L_main2:
	DEC        R16
	BRNE       L_main2
	DEC        R17
	BRNE       L_main2
	DEC        R18
	BRNE       L_main2
	NOP
;DC motor.c,15 :: 		m1=0;m2=0;
	IN         R27, PORTD+0
	CBR        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	CBR        R27, 2
	OUT        PORTD+0, R27
;DC motor.c,16 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main4:
	DEC        R16
	BRNE       L_main4
	DEC        R17
	BRNE       L_main4
	DEC        R18
	BRNE       L_main4
;DC motor.c,17 :: 		m1=0;m2=1;
	IN         R27, PORTD+0
	CBR        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	SBR        R27, 2
	OUT        PORTD+0, R27
;DC motor.c,18 :: 		delay_ms(4000);
	LDI        R18, 163
	LDI        R17, 87
	LDI        R16, 3
L_main6:
	DEC        R16
	BRNE       L_main6
	DEC        R17
	BRNE       L_main6
	DEC        R18
	BRNE       L_main6
	NOP
;DC motor.c,19 :: 		m1=0;m2=0;
	IN         R27, PORTD+0
	CBR        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	CBR        R27, 2
	OUT        PORTD+0, R27
;DC motor.c,20 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main8:
	DEC        R16
	BRNE       L_main8
	DEC        R17
	BRNE       L_main8
	DEC        R18
	BRNE       L_main8
;DC motor.c,21 :: 		}
	JMP        L_main0
;DC motor.c,22 :: 		}
L_end_main:
L__main_end_loop:
	JMP        L__main_end_loop
; end of _main
