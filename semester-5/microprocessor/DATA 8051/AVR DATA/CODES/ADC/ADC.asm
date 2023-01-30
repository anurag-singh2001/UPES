
_cmd_lcd:

;ADC.c,21 :: 		void cmd_lcd (char dat)    // function to write command at lcd port
;ADC.c,23 :: 		PORTC=dat;
	OUT        PORTC+0, R2
;ADC.c,24 :: 		RS=0;                          //clear RS (ie. RS=0) to write command
	IN         R27, PORTA+0
	CBR        R27, 1
	OUT        PORTA+0, R27
;ADC.c,25 :: 		E=1;                          // send  H-L pulse        at E pin
	IN         R27, PORTA+0
	SBR        R27, 2
	OUT        PORTA+0, R27
;ADC.c,26 :: 		delay_ms(20);
	LDI        R18, 2
	LDI        R17, 4
	LDI        R16, 187
L_cmd_lcd0:
	DEC        R16
	BRNE       L_cmd_lcd0
	DEC        R17
	BRNE       L_cmd_lcd0
	DEC        R18
	BRNE       L_cmd_lcd0
	NOP
;ADC.c,27 :: 		E=0;
	IN         R27, PORTA+0
	CBR        R27, 2
	OUT        PORTA+0, R27
;ADC.c,28 :: 		}
L_end_cmd_lcd:
	RET
; end of _cmd_lcd

_data_lcd:

;ADC.c,30 :: 		void data_lcd (char dat)        // function to write data at lcd port
;ADC.c,32 :: 		PORTC=dat;
	OUT        PORTC+0, R2
;ADC.c,33 :: 		RS=1;                                // set RS=1 to write DATA
	IN         R27, PORTA+0
	SBR        R27, 1
	OUT        PORTA+0, R27
;ADC.c,34 :: 		E=1;                          // send  H-L pulse        at E pin
	IN         R27, PORTA+0
	SBR        R27, 2
	OUT        PORTA+0, R27
;ADC.c,35 :: 		delay_ms(20);
	LDI        R18, 2
	LDI        R17, 4
	LDI        R16, 187
L_data_lcd2:
	DEC        R16
	BRNE       L_data_lcd2
	DEC        R17
	BRNE       L_data_lcd2
	DEC        R18
	BRNE       L_data_lcd2
	NOP
;ADC.c,36 :: 		E=0;
	IN         R27, PORTA+0
	CBR        R27, 2
	OUT        PORTA+0, R27
;ADC.c,37 :: 		}
L_end_data_lcd:
	RET
; end of _data_lcd

_init_lcd:

;ADC.c,39 :: 		void init_lcd()                                 // function to initialize the LCD at power on time
;ADC.c,41 :: 		cmd_lcd (0x38);                         // 2x16 display select
	PUSH       R2
	LDI        R27, 56
	MOV        R2, R27
	CALL       _cmd_lcd+0
;ADC.c,42 :: 		cmd_lcd (0x0e);                         // display on cursor off command
	LDI        R27, 14
	MOV        R2, R27
	CALL       _cmd_lcd+0
;ADC.c,43 :: 		cmd_lcd (0x06);                         // automatic cursor movement to right
	LDI        R27, 6
	MOV        R2, R27
	CALL       _cmd_lcd+0
;ADC.c,44 :: 		cmd_lcd (0x01);                         // lcd clear command
	LDI        R27, 1
	MOV        R2, R27
	CALL       _cmd_lcd+0
;ADC.c,45 :: 		cmd_lcd (0x80);                                 // first row first coloumn select command
	LDI        R27, 128
	MOV        R2, R27
	CALL       _cmd_lcd+0
;ADC.c,46 :: 		}
L_end_init_lcd:
	POP        R2
	RET
; end of _init_lcd

_string_lcd:

;ADC.c,48 :: 		void string_lcd(char *str)           // function to display string to lcd
;ADC.c,50 :: 		while(*str!='\0')                                  // '\0' is null char as last char of pointer is null
L_string_lcd4:
	MOVW       R30, R2
	LD         R16, Z
	CPI        R16, 0
	BRNE       L__string_lcd19
	JMP        L_string_lcd5
L__string_lcd19:
;ADC.c,52 :: 		data_lcd(*str);
	MOVW       R30, R2
	LD         R16, Z
	PUSH       R3
	PUSH       R2
	MOV        R2, R16
	CALL       _data_lcd+0
	POP        R2
	POP        R3
;ADC.c,53 :: 		str++;
	MOVW       R16, R2
	SUBI       R16, 255
	SBCI       R17, 255
	MOVW       R2, R16
;ADC.c,54 :: 		}
	JMP        L_string_lcd4
L_string_lcd5:
;ADC.c,55 :: 		}
L_end_string_lcd:
	RET
; end of _string_lcd

_number_lcd:

;ADC.c,57 :: 		void number_lcd(int num)      // function to display 3 digit decimal value to lcd
;ADC.c,59 :: 		data_lcd( (num / 100) + 0x30);
	PUSH       R2
	PUSH       R3
	PUSH       R3
	PUSH       R2
	LDI        R20, 100
	LDI        R21, 0
	MOVW       R16, R2
	CALL       _Div_16x16_S+0
	MOVW       R16, R22
	SUBI       R16, 208
	MOV        R2, R16
	CALL       _data_lcd+0
	POP        R2
	POP        R3
;ADC.c,60 :: 		data_lcd( (num / 10)%10 + 0x30);
	PUSH       R3
	PUSH       R2
	LDI        R20, 10
	LDI        R21, 0
	MOVW       R16, R2
	CALL       _Div_16x16_S+0
	MOVW       R16, R22
	LDI        R20, 10
	LDI        R21, 0
	CALL       _Div_16x16_S+0
	MOVW       R16, R24
	SUBI       R16, 208
	MOV        R2, R16
	CALL       _data_lcd+0
	POP        R2
	POP        R3
;ADC.c,61 :: 		data_lcd( (num % 10) + 0x30);
	LDI        R20, 10
	LDI        R21, 0
	MOVW       R16, R2
	CALL       _Div_16x16_S+0
	MOVW       R16, R24
	SUBI       R16, 208
	MOV        R2, R16
	CALL       _data_lcd+0
;ADC.c,62 :: 		}
L_end_number_lcd:
	POP        R3
	POP        R2
	RET
; end of _number_lcd

_clock:

;ADC.c,64 :: 		void clock(void)
;ADC.c,67 :: 		for(b=0;b<=3000;b++)
; b start address is: 18 (R18)
	LDI        R18, 0
	LDI        R19, 0
; b end address is: 18 (R18)
L_clock6:
; b start address is: 18 (R18)
	LDI        R16, 184
	LDI        R17, 11
	CP         R16, R18
	CPC        R17, R19
	BRGE       L__clock22
	JMP        L_clock7
L__clock22:
;ADC.c,69 :: 		CLOCK=~CLOCK;
	IN         R0, PORTB+0
	LDI        R27, 128
	EOR        R0, R27
	OUT        PORTB+0, R0
;ADC.c,70 :: 		delay_us(100);
	LDI        R17, 2
	LDI        R16, 75
L_clock9:
	DEC        R16
	BRNE       L_clock9
	DEC        R17
	BRNE       L_clock9
	NOP
	NOP
;ADC.c,67 :: 		for(b=0;b<=3000;b++)
	MOVW       R16, R18
	SUBI       R16, 255
	SBCI       R17, 255
	MOVW       R18, R16
;ADC.c,71 :: 		}
; b end address is: 18 (R18)
	JMP        L_clock6
L_clock7:
;ADC.c,72 :: 		}
L_end_clock:
	RET
; end of _clock

_main:
	LDI        R27, 255
	OUT        SPL+0, R27
	LDI        R27, 0
	OUT        SPL+1, R27

;ADC.c,74 :: 		void main(void)
;ADC.c,77 :: 		DDRA=0XFF;
	PUSH       R2
	PUSH       R3
	LDI        R27, 255
	OUT        DDRA+0, R27
;ADC.c,78 :: 		DDRB=0XF7;
	LDI        R27, 247
	OUT        DDRB+0, R27
;ADC.c,79 :: 		DDRC=0XFF;
	LDI        R27, 255
	OUT        DDRC+0, R27
;ADC.c,80 :: 		DDRD=0X00;
	LDI        R27, 0
	OUT        DDRD+0, R27
;ADC.c,81 :: 		PORTD=0XFF;
	LDI        R27, 255
	OUT        PORTD+0, R27
;ADC.c,82 :: 		PORTB=0X00;
	LDI        R27, 0
	OUT        PORTB+0, R27
;ADC.c,84 :: 		SOC=ALE=EOC=1;
	IN         R27, PINB+0
	SBR        R27, 8
	OUT        PINB+0, R27
	IN         R27, PINB+0
	BST        R27, 3
	IN         R27, PORTB+0
	BLD        R27, 2
	OUT        PORTB+0, R27
	IN         R27, PORTB+0
	BST        R27, 2
	IN         R27, PORTB+0
	BLD        R27, 1
	OUT        PORTB+0, R27
;ADC.c,85 :: 		OE=0;
	IN         R27, PORTB+0
	CBR        R27, 1
	OUT        PORTB+0, R27
;ADC.c,86 :: 		init_lcd();
	CALL       _init_lcd+0
;ADC.c,87 :: 		string_lcd("ADC check");
	LDI        R27, #lo_addr(?lstr1_ADC+0)
	MOV        R2, R27
	LDI        R27, hi_addr(?lstr1_ADC+0)
	MOV        R3, R27
	CALL       _string_lcd+0
;ADC.c,88 :: 		while(1)
L_main11:
;ADC.c,90 :: 		cmd_lcd(0xc0);
	LDI        R27, 192
	MOV        R2, R27
	CALL       _cmd_lcd+0
;ADC.c,91 :: 		SET0=0;        SET1=0;        SET2=0;  //channel selection "000"
	IN         R27, PORTB+0
	CBR        R27, 16
	OUT        PORTB+0, R27
	IN         R27, PORTB+0
	CBR        R27, 32
	OUT        PORTB+0, R27
	IN         R27, PORTB+0
	CBR        R27, 64
	OUT        PORTB+0, R27
;ADC.c,92 :: 		ALE=1;    SOC=1;    clock();
	IN         R27, PORTB+0
	SBR        R27, 4
	OUT        PORTB+0, R27
	IN         R27, PORTB+0
	SBR        R27, 2
	OUT        PORTB+0, R27
	CALL       _clock+0
;ADC.c,93 :: 		ALE=0;    SOC=0;    clock();
	IN         R27, PORTB+0
	CBR        R27, 4
	OUT        PORTB+0, R27
	IN         R27, PORTB+0
	CBR        R27, 2
	OUT        PORTB+0, R27
	CALL       _clock+0
;ADC.c,94 :: 		while(EOC==0);
L_main13:
	IN         R27, PINB+0
	SBRC       R27, 3
	JMP        L_main14
	JMP        L_main13
L_main14:
;ADC.c,95 :: 		OE = 1;
	IN         R27, PORTB+0
	SBR        R27, 1
	OUT        PORTB+0, R27
;ADC.c,96 :: 		number_lcd(PIND);
	IN         R2, PIND+0
	LDI        R27, 0
	MOV        R3, R27
	CALL       _number_lcd+0
;ADC.c,97 :: 		}
	JMP        L_main11
;ADC.c,98 :: 		}
L_end_main:
L__main_end_loop:
	JMP        L__main_end_loop
; end of _main
