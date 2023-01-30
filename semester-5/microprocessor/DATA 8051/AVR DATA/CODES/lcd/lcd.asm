
_cmd_lcd:

;lcd.h,1 :: 		void cmd_lcd (unsigned char dat)    // function to write command at lcd port
;lcd.h,3 :: 		LCD=dat;
	OUT        PORTD+0, R2
;lcd.h,4 :: 		RS=0;                          //clear RS (ie. RS=0) to write command
	IN         R27, PORTB+0
	CBR        R27, 1
	OUT        PORTB+0, R27
;lcd.h,5 :: 		E=1;                          // send  H-L pulse        at E pin
	IN         R27, PORTB+0
	SBR        R27, 2
	OUT        PORTB+0, R27
;lcd.h,6 :: 		delay_us(100);
	LDI        R17, 2
	LDI        R16, 9
L_cmd_lcd0:
	DEC        R16
	BRNE       L_cmd_lcd0
	DEC        R17
	BRNE       L_cmd_lcd0
;lcd.h,7 :: 		E=0;
	IN         R27, PORTB+0
	CBR        R27, 2
	OUT        PORTB+0, R27
;lcd.h,8 :: 		delay_us(100);
	LDI        R17, 2
	LDI        R16, 9
L_cmd_lcd2:
	DEC        R16
	BRNE       L_cmd_lcd2
	DEC        R17
	BRNE       L_cmd_lcd2
;lcd.h,9 :: 		}
L_end_cmd_lcd:
	RET
; end of _cmd_lcd

_data_lcd:

;lcd.h,11 :: 		void data_lcd (unsigned char dat)        // function to write data at lcd port
;lcd.h,13 :: 		LCD=dat;
	OUT        PORTD+0, R2
;lcd.h,14 :: 		RS=1;                                // set RS=1 to write DATA
	IN         R27, PORTB+0
	SBR        R27, 1
	OUT        PORTB+0, R27
;lcd.h,15 :: 		E=1;                                // send  H-L pulse at E pin
	IN         R27, PORTB+0
	SBR        R27, 2
	OUT        PORTB+0, R27
;lcd.h,16 :: 		delay_us(100);
	LDI        R17, 2
	LDI        R16, 9
L_data_lcd4:
	DEC        R16
	BRNE       L_data_lcd4
	DEC        R17
	BRNE       L_data_lcd4
;lcd.h,17 :: 		E=0;
	IN         R27, PORTB+0
	CBR        R27, 2
	OUT        PORTB+0, R27
;lcd.h,18 :: 		delay_us(100);
	LDI        R17, 2
	LDI        R16, 9
L_data_lcd6:
	DEC        R16
	BRNE       L_data_lcd6
	DEC        R17
	BRNE       L_data_lcd6
;lcd.h,19 :: 		}
L_end_data_lcd:
	RET
; end of _data_lcd

_init_lcd:

;lcd.h,21 :: 		void init_lcd()                                 // function to initialize the LCD at power on time
;lcd.h,24 :: 		cmd_lcd (0x38);                         // 2x16 display select
	PUSH       R2
	LDI        R27, 56
	MOV        R2, R27
	CALL       _cmd_lcd+0
;lcd.h,25 :: 		delay_ms(50);
	LDI        R18, 3
	LDI        R17, 8
	LDI        R16, 120
L_init_lcd8:
	DEC        R16
	BRNE       L_init_lcd8
	DEC        R17
	BRNE       L_init_lcd8
	DEC        R18
	BRNE       L_init_lcd8
;lcd.h,26 :: 		cmd_lcd (0x0c);                         // display on cursor off command
	LDI        R27, 12
	MOV        R2, R27
	CALL       _cmd_lcd+0
;lcd.h,27 :: 		delay_ms(1);
	LDI        R17, 11
	LDI        R16, 99
L_init_lcd10:
	DEC        R16
	BRNE       L_init_lcd10
	DEC        R17
	BRNE       L_init_lcd10
;lcd.h,28 :: 		cmd_lcd (0x06);                         // automatic cursor movement to right
	LDI        R27, 6
	MOV        R2, R27
	CALL       _cmd_lcd+0
;lcd.h,29 :: 		delay_ms(1);
	LDI        R17, 11
	LDI        R16, 99
L_init_lcd12:
	DEC        R16
	BRNE       L_init_lcd12
	DEC        R17
	BRNE       L_init_lcd12
;lcd.h,30 :: 		cmd_lcd (0x01);                         // lcd clear command
	LDI        R27, 1
	MOV        R2, R27
	CALL       _cmd_lcd+0
;lcd.h,31 :: 		delay_ms(5);
	LDI        R17, 52
	LDI        R16, 242
L_init_lcd14:
	DEC        R16
	BRNE       L_init_lcd14
	DEC        R17
	BRNE       L_init_lcd14
	NOP
;lcd.h,32 :: 		}
L_end_init_lcd:
	POP        R2
	RET
; end of _init_lcd

_string_lcd:

;lcd.h,34 :: 		void string_lcd(unsigned char *str)           // function to display string to lcd
;lcd.h,36 :: 		while(*str!='\0')                                  // '\0' is null char as last char of pointer is null
L_string_lcd16:
	MOVW       R30, R2
	LD         R16, Z
	CPI        R16, 0
	BRNE       L__string_lcd34
	JMP        L_string_lcd17
L__string_lcd34:
;lcd.h,38 :: 		data_lcd(*str);
	MOVW       R30, R2
	LD         R16, Z
	PUSH       R3
	PUSH       R2
	MOV        R2, R16
	CALL       _data_lcd+0
	POP        R2
	POP        R3
;lcd.h,39 :: 		str++;
	MOVW       R16, R2
	SUBI       R16, 255
	SBCI       R17, 255
	MOVW       R2, R16
;lcd.h,40 :: 		}
	JMP        L_string_lcd16
L_string_lcd17:
;lcd.h,41 :: 		}
L_end_string_lcd:
	RET
; end of _string_lcd

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

;lcd.c,10 :: 		void main()
;lcd.c,13 :: 		CTRL_DIR=0XFF;
	PUSH       R2
	PUSH       R3
	LDI        R27, 255
	OUT        DDRB+0, R27
;lcd.c,14 :: 		LCD_DIR=0XFF;
	LDI        R27, 255
	OUT        DDRD+0, R27
;lcd.c,15 :: 		init_lcd();
	CALL       _init_lcd+0
;lcd.c,16 :: 		while(1)
L_main18:
;lcd.c,18 :: 		cmd_lcd(0x80);
	LDI        R27, 128
	MOV        R2, R27
	CALL       _cmd_lcd+0
;lcd.c,19 :: 		string_lcd("LCD DISPLAY");
	LDI        R27, #lo_addr(?lstr1_lcd+0)
	MOV        R2, R27
	LDI        R27, hi_addr(?lstr1_lcd+0)
	MOV        R3, R27
	CALL       _string_lcd+0
;lcd.c,20 :: 		cmd_lcd(0xc0);
	LDI        R27, 192
	MOV        R2, R27
	CALL       _cmd_lcd+0
;lcd.c,21 :: 		string_lcd("** AVR ** ");
	LDI        R27, #lo_addr(?lstr2_lcd+0)
	MOV        R2, R27
	LDI        R27, hi_addr(?lstr2_lcd+0)
	MOV        R3, R27
	CALL       _string_lcd+0
;lcd.c,23 :: 		for(i=0;i<5;i++)
	LDI        R27, 0
	STD        Y+0, R27
L_main20:
	LDD        R16, Y+0
	CPI        R16, 5
	BRLO       L__main36
	JMP        L_main21
L__main36:
;lcd.c,25 :: 		cmd_lcd(0x1C);
	LDI        R27, 28
	MOV        R2, R27
	CALL       _cmd_lcd+0
;lcd.c,26 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main23:
	DEC        R16
	BRNE       L_main23
	DEC        R17
	BRNE       L_main23
	DEC        R18
	BRNE       L_main23
;lcd.c,23 :: 		for(i=0;i<5;i++)
	LDD        R16, Y+0
	SUBI       R16, 255
	STD        Y+0, R16
;lcd.c,27 :: 		}
	JMP        L_main20
L_main21:
;lcd.c,28 :: 		for(i=0;i<5;i++)
	LDI        R27, 0
	STD        Y+0, R27
L_main25:
	LDD        R16, Y+0
	CPI        R16, 5
	BRLO       L__main37
	JMP        L_main26
L__main37:
;lcd.c,30 :: 		cmd_lcd(0x18);
	LDI        R27, 24
	MOV        R2, R27
	CALL       _cmd_lcd+0
;lcd.c,31 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main28:
	DEC        R16
	BRNE       L_main28
	DEC        R17
	BRNE       L_main28
	DEC        R18
	BRNE       L_main28
;lcd.c,28 :: 		for(i=0;i<5;i++)
	LDD        R16, Y+0
	SUBI       R16, 255
	STD        Y+0, R16
;lcd.c,32 :: 		}
	JMP        L_main25
L_main26:
;lcd.c,33 :: 		}
	JMP        L_main18
;lcd.c,34 :: 		}
L_end_main:
	POP        R3
	POP        R2
L__main_end_loop:
	JMP        L__main_end_loop
; end of _main
