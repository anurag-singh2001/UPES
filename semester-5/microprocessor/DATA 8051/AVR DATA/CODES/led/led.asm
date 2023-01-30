
_main:
	LDI        R27, 255
	OUT        SPL+0, R27
	LDI        R27, 0
	OUT        SPL+1, R27

;led.c,5 :: 		void main()
;led.c,7 :: 		unsigned char i=0;
;led.c,8 :: 		LED_DIR = 0xFF;         // output port
	LDI        R27, 255
	OUT        DDRD+0, R27
;led.c,9 :: 		LED=0x00;
	LDI        R27, 0
	OUT        PORTD+0, R27
;led.c,11 :: 		while(1)
L_main0:
;led.c,14 :: 		LED=0x0f;
	LDI        R27, 15
	OUT        PORTD+0, R27
;led.c,15 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main2:
	DEC        R16
	BRNE       L_main2
	DEC        R17
	BRNE       L_main2
	DEC        R18
	BRNE       L_main2
;led.c,16 :: 		LED=0xf0;
	LDI        R27, 240
	OUT        PORTD+0, R27
;led.c,17 :: 		delay_ms(1000);
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
;led.c,19 :: 		LED=0xaa;
	LDI        R27, 170
	OUT        PORTD+0, R27
;led.c,20 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main6:
	DEC        R16
	BRNE       L_main6
	DEC        R17
	BRNE       L_main6
	DEC        R18
	BRNE       L_main6
;led.c,21 :: 		LED=0x55;
	LDI        R27, 85
	OUT        PORTD+0, R27
;led.c,22 :: 		delay_ms(1000);
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
;led.c,24 :: 		LED=0x01;
	LDI        R27, 1
	OUT        PORTD+0, R27
;led.c,25 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main10:
	DEC        R16
	BRNE       L_main10
	DEC        R17
	BRNE       L_main10
	DEC        R18
	BRNE       L_main10
;led.c,26 :: 		for(i=0;i<=7;i++)
; i start address is: 17 (R17)
	LDI        R17, 0
; i end address is: 17 (R17)
L_main12:
; i start address is: 17 (R17)
	LDI        R16, 7
	CP         R16, R17
	BRSH       L__main39
	JMP        L_main13
L__main39:
;led.c,28 :: 		LED=LED<<1;
	IN         R16, PORTD+0
	LSL        R16
	OUT        PORTD+0, R16
;led.c,29 :: 		delay_ms(1000);
	PUSH       R17
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main15:
	DEC        R16
	BRNE       L_main15
	DEC        R17
	BRNE       L_main15
	DEC        R18
	BRNE       L_main15
	POP        R17
;led.c,26 :: 		for(i=0;i<=7;i++)
	MOV        R16, R17
	SUBI       R16, 255
	MOV        R17, R16
;led.c,30 :: 		}
; i end address is: 17 (R17)
	JMP        L_main12
L_main13:
;led.c,32 :: 		LED=0x80;
	LDI        R27, 128
	OUT        PORTD+0, R27
;led.c,33 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main17:
	DEC        R16
	BRNE       L_main17
	DEC        R17
	BRNE       L_main17
	DEC        R18
	BRNE       L_main17
;led.c,34 :: 		for(i=0;i<=7;i++)
; i start address is: 17 (R17)
	LDI        R17, 0
; i end address is: 17 (R17)
L_main19:
; i start address is: 17 (R17)
	LDI        R16, 7
	CP         R16, R17
	BRSH       L__main40
	JMP        L_main20
L__main40:
;led.c,36 :: 		LED=LED>>1;
	IN         R16, PORTD+0
	LSR        R16
	OUT        PORTD+0, R16
;led.c,37 :: 		delay_ms(1000);
	PUSH       R17
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
	POP        R17
;led.c,34 :: 		for(i=0;i<=7;i++)
	MOV        R16, R17
	SUBI       R16, 255
	MOV        R17, R16
;led.c,38 :: 		}
; i end address is: 17 (R17)
	JMP        L_main19
L_main20:
;led.c,40 :: 		LED=0x01;
	LDI        R27, 1
	OUT        PORTD+0, R27
;led.c,41 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main24:
	DEC        R16
	BRNE       L_main24
	DEC        R17
	BRNE       L_main24
	DEC        R18
	BRNE       L_main24
;led.c,42 :: 		for(i=0;i<=7;i++)
; i start address is: 17 (R17)
	LDI        R17, 0
; i end address is: 17 (R17)
L_main26:
; i start address is: 17 (R17)
	LDI        R16, 7
	CP         R16, R17
	BRSH       L__main41
	JMP        L_main27
L__main41:
;led.c,44 :: 		LED=LED<<1 | 0x01;
	IN         R16, PORTD+0
	LSL        R16
	ORI        R16, 1
	OUT        PORTD+0, R16
;led.c,45 :: 		delay_ms(1000);
	PUSH       R17
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main29:
	DEC        R16
	BRNE       L_main29
	DEC        R17
	BRNE       L_main29
	DEC        R18
	BRNE       L_main29
	POP        R17
;led.c,42 :: 		for(i=0;i<=7;i++)
	MOV        R16, R17
	SUBI       R16, 255
	MOV        R17, R16
;led.c,46 :: 		}
; i end address is: 17 (R17)
	JMP        L_main26
L_main27:
;led.c,48 :: 		LED=0x80;
	LDI        R27, 128
	OUT        PORTD+0, R27
;led.c,49 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main31:
	DEC        R16
	BRNE       L_main31
	DEC        R17
	BRNE       L_main31
	DEC        R18
	BRNE       L_main31
;led.c,50 :: 		for(i=0;i<=7;i++)
; i start address is: 17 (R17)
	LDI        R17, 0
; i end address is: 17 (R17)
L_main33:
; i start address is: 17 (R17)
	LDI        R16, 7
	CP         R16, R17
	BRSH       L__main42
	JMP        L_main34
L__main42:
;led.c,52 :: 		LED=LED>>1 | 0x80;
	IN         R16, PORTD+0
	LSR        R16
	ORI        R16, 128
	OUT        PORTD+0, R16
;led.c,53 :: 		delay_ms(1000);
	PUSH       R17
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main36:
	DEC        R16
	BRNE       L_main36
	DEC        R17
	BRNE       L_main36
	DEC        R18
	BRNE       L_main36
	POP        R17
;led.c,50 :: 		for(i=0;i<=7;i++)
	MOV        R16, R17
	SUBI       R16, 255
	MOV        R17, R16
;led.c,54 :: 		}
; i end address is: 17 (R17)
	JMP        L_main33
L_main34:
;led.c,56 :: 		}
	JMP        L_main0
;led.c,57 :: 		}
L_end_main:
L__main_end_loop:
	JMP        L__main_end_loop
; end of _main
