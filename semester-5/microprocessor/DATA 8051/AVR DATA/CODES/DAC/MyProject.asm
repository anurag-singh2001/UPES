
_main:
	LDI        R27, 255
	OUT        SPL+0, R27
	LDI        R27, 0
	OUT        SPL+1, R27
	IN         R28, SPL+0
	IN         R29, SPL+1
	SBIW       R28, 4
	OUT        SPL+0, R28
	OUT        SPL+1, R29
	ADIW       R28, 1

;MyProject.c,4 :: 		void main()
;MyProject.c,7 :: 		DAC_DIR = 0xFF;
	LDI        R27, 255
	OUT        DDRD+0, R27
;MyProject.c,9 :: 		while(1)
L_main0:
;MyProject.c,11 :: 		for(i=0;i<255;i++)
	LDI        R27, 0
	STD        Y+0, R27
	STD        Y+1, R27
L_main2:
	LDD        R18, Y+0
	LDD        R19, Y+1
	LDI        R16, 255
	LDI        R17, 0
	CP         R18, R16
	CPC        R19, R17
	BRLT       L__main15
	JMP        L_main3
L__main15:
;MyProject.c,13 :: 		DAC = i;
	LDD        R16, Y+0
	OUT        PORTD+0, R16
;MyProject.c,14 :: 		for(j=0;j<2;j++);
	LDI        R27, 0
	STD        Y+2, R27
	STD        Y+3, R27
L_main5:
	LDD        R18, Y+2
	LDD        R19, Y+3
	LDI        R16, 2
	LDI        R17, 0
	CP         R18, R16
	CPC        R19, R17
	BRLT       L__main16
	JMP        L_main6
L__main16:
	LDD        R16, Y+2
	LDD        R17, Y+3
	SUBI       R16, 255
	SBCI       R17, 255
	STD        Y+2, R16
	STD        Y+3, R17
	JMP        L_main5
L_main6:
;MyProject.c,11 :: 		for(i=0;i<255;i++)
	LDD        R16, Y+0
	LDD        R17, Y+1
	SUBI       R16, 255
	SBCI       R17, 255
	STD        Y+0, R16
	STD        Y+1, R17
;MyProject.c,15 :: 		}
	JMP        L_main2
L_main3:
;MyProject.c,16 :: 		for(i=255;i>0;i--)
	LDI        R27, 255
	STD        Y+0, R27
	LDI        R27, 0
	STD        Y+1, R27
L_main8:
	LDD        R18, Y+0
	LDD        R19, Y+1
	LDI        R16, 0
	LDI        R17, 0
	CP         R16, R18
	CPC        R17, R19
	BRLT       L__main17
	JMP        L_main9
L__main17:
;MyProject.c,18 :: 		DAC = i;
	LDD        R16, Y+0
	OUT        PORTD+0, R16
;MyProject.c,19 :: 		for(j=0;j<2;j++);
	LDI        R27, 0
	STD        Y+2, R27
	STD        Y+3, R27
L_main11:
	LDD        R18, Y+2
	LDD        R19, Y+3
	LDI        R16, 2
	LDI        R17, 0
	CP         R18, R16
	CPC        R19, R17
	BRLT       L__main18
	JMP        L_main12
L__main18:
	LDD        R16, Y+2
	LDD        R17, Y+3
	SUBI       R16, 255
	SBCI       R17, 255
	STD        Y+2, R16
	STD        Y+3, R17
	JMP        L_main11
L_main12:
;MyProject.c,16 :: 		for(i=255;i>0;i--)
	LDD        R16, Y+0
	LDD        R17, Y+1
	SUBI       R16, 1
	SBCI       R17, 0
	STD        Y+0, R16
	STD        Y+1, R17
;MyProject.c,20 :: 		}
	JMP        L_main8
L_main9:
;MyProject.c,21 :: 		}
	JMP        L_main0
;MyProject.c,22 :: 		}
L_end_main:
L__main_end_loop:
	JMP        L__main_end_loop
; end of _main
