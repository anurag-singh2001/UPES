
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

;stepper motor.c,7 :: 		void main()
;stepper motor.c,10 :: 		MOTOR_DIR = 0xFF;
	LDI        R27, 255
	OUT        DDRD+0, R27
;stepper motor.c,12 :: 		while(1)
L_main0:
;stepper motor.c,14 :: 		for(i=0;i<12;i++)
	LDI        R27, 0
	STD        Y+0, R27
L_main2:
	LDD        R16, Y+0
	CPI        R16, 12
	BRLO       L__main25
	JMP        L_main3
L__main25:
;stepper motor.c,16 :: 		m1=1;m2=m3=m4=0;
	IN         R27, PORTD+0
	SBR        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	CBR        R27, 4
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 2
	IN         R27, PORTD+0
	BLD        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 1
	IN         R27, PORTD+0
	BLD        R27, 3
	OUT        PORTD+0, R27
;stepper motor.c,17 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main5:
	DEC        R16
	BRNE       L_main5
	DEC        R17
	BRNE       L_main5
	DEC        R18
	BRNE       L_main5
;stepper motor.c,18 :: 		m2=1;m1=m3=m4=0;
	IN         R27, PORTD+0
	SBR        R27, 8
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	CBR        R27, 4
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 2
	IN         R27, PORTD+0
	BLD        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 1
	IN         R27, PORTD+0
	BLD        R27, 0
	OUT        PORTD+0, R27
;stepper motor.c,19 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main7:
	DEC        R16
	BRNE       L_main7
	DEC        R17
	BRNE       L_main7
	DEC        R18
	BRNE       L_main7
;stepper motor.c,20 :: 		m3=1;m1=m2=m4=0;
	IN         R27, PORTD+0
	SBR        R27, 2
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	CBR        R27, 4
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 2
	IN         R27, PORTD+0
	BLD        R27, 3
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 3
	IN         R27, PORTD+0
	BLD        R27, 0
	OUT        PORTD+0, R27
;stepper motor.c,21 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main9:
	DEC        R16
	BRNE       L_main9
	DEC        R17
	BRNE       L_main9
	DEC        R18
	BRNE       L_main9
;stepper motor.c,22 :: 		m1=m2=m3=0;m4=1;
	IN         R27, PORTD+0
	CBR        R27, 2
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 1
	IN         R27, PORTD+0
	BLD        R27, 3
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 3
	IN         R27, PORTD+0
	BLD        R27, 0
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	SBR        R27, 4
	OUT        PORTD+0, R27
;stepper motor.c,23 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main11:
	DEC        R16
	BRNE       L_main11
	DEC        R17
	BRNE       L_main11
	DEC        R18
	BRNE       L_main11
;stepper motor.c,14 :: 		for(i=0;i<12;i++)
	LDD        R16, Y+0
	SUBI       R16, 255
	STD        Y+0, R16
;stepper motor.c,24 :: 		}                                       //motor will move anticlockwise
	JMP        L_main2
L_main3:
;stepper motor.c,25 :: 		for(i=0;i<12;i++)
	LDI        R27, 0
	STD        Y+0, R27
L_main13:
	LDD        R16, Y+0
	CPI        R16, 12
	BRLO       L__main26
	JMP        L_main14
L__main26:
;stepper motor.c,27 :: 		m1=m2=m3=0;m4=1;
	IN         R27, PORTD+0
	CBR        R27, 2
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 1
	IN         R27, PORTD+0
	BLD        R27, 3
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 3
	IN         R27, PORTD+0
	BLD        R27, 0
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	SBR        R27, 4
	OUT        PORTD+0, R27
;stepper motor.c,28 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main16:
	DEC        R16
	BRNE       L_main16
	DEC        R17
	BRNE       L_main16
	DEC        R18
	BRNE       L_main16
;stepper motor.c,29 :: 		m3=1;m1=m2=m4=0;
	IN         R27, PORTD+0
	SBR        R27, 2
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	CBR        R27, 4
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 2
	IN         R27, PORTD+0
	BLD        R27, 3
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 3
	IN         R27, PORTD+0
	BLD        R27, 0
	OUT        PORTD+0, R27
;stepper motor.c,30 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main18:
	DEC        R16
	BRNE       L_main18
	DEC        R17
	BRNE       L_main18
	DEC        R18
	BRNE       L_main18
;stepper motor.c,31 :: 		m2=1;m1=m3=m4=0;
	IN         R27, PORTD+0
	SBR        R27, 8
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	CBR        R27, 4
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 2
	IN         R27, PORTD+0
	BLD        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 1
	IN         R27, PORTD+0
	BLD        R27, 0
	OUT        PORTD+0, R27
;stepper motor.c,32 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main20:
	DEC        R16
	BRNE       L_main20
	DEC        R17
	BRNE       L_main20
	DEC        R18
	BRNE       L_main20
;stepper motor.c,33 :: 		m1=1;m2=m3=m4=0;
	IN         R27, PORTD+0
	SBR        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	CBR        R27, 4
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 2
	IN         R27, PORTD+0
	BLD        R27, 1
	OUT        PORTD+0, R27
	IN         R27, PORTD+0
	BST        R27, 1
	IN         R27, PORTD+0
	BLD        R27, 3
	OUT        PORTD+0, R27
;stepper motor.c,34 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main22:
	DEC        R16
	BRNE       L_main22
	DEC        R17
	BRNE       L_main22
	DEC        R18
	BRNE       L_main22
;stepper motor.c,25 :: 		for(i=0;i<12;i++)
	LDD        R16, Y+0
	SUBI       R16, 255
	STD        Y+0, R16
;stepper motor.c,35 :: 		}
	JMP        L_main13
L_main14:
;stepper motor.c,36 :: 		}
	JMP        L_main0
;stepper motor.c,37 :: 		}
L_end_main:
L__main_end_loop:
	JMP        L__main_end_loop
; end of _main
