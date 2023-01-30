
_cmd_lcd:

;lcd.h,1 :: 		void cmd_lcd (unsigned char dat)    // function to write command at lcd port
;lcd.h,3 :: 		LCD=dat;
	OUT        PORTA+0, R2
;lcd.h,4 :: 		RS=0;                          //clear RS (ie. RS=0) to write command
	IN         R27, PORTC+0
	CBR        R27, 1
	OUT        PORTC+0, R27
;lcd.h,5 :: 		E=1;                          // send  H-L pulse        at E pin
	IN         R27, PORTC+0
	SBR        R27, 2
	OUT        PORTC+0, R27
;lcd.h,6 :: 		delay_us(100);
	LDI        R17, 2
	LDI        R16, 9
L_cmd_lcd0:
	DEC        R16
	BRNE       L_cmd_lcd0
	DEC        R17
	BRNE       L_cmd_lcd0
;lcd.h,7 :: 		E=0;
	IN         R27, PORTC+0
	CBR        R27, 2
	OUT        PORTC+0, R27
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
	OUT        PORTA+0, R2
;lcd.h,14 :: 		RS=1;                                // set RS=1 to write DATA
	IN         R27, PORTC+0
	SBR        R27, 1
	OUT        PORTC+0, R27
;lcd.h,15 :: 		E=1;                                // send  H-L pulse at E pin
	IN         R27, PORTC+0
	SBR        R27, 2
	OUT        PORTC+0, R27
;lcd.h,16 :: 		delay_us(100);
	LDI        R17, 2
	LDI        R16, 9
L_data_lcd4:
	DEC        R16
	BRNE       L_data_lcd4
	DEC        R17
	BRNE       L_data_lcd4
;lcd.h,17 :: 		E=0;
	IN         R27, PORTC+0
	CBR        R27, 2
	OUT        PORTC+0, R27
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
	BRNE       L__string_lcd42
	JMP        L_string_lcd17
L__string_lcd42:
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

_init_serial:

;serial.h,2 :: 		void init_serial(unsigned long Baud_Rate)
;serial.h,5 :: 		ubrr_value = F_CPU/(Baud_Rate*16)-1;
	LDI        R27, 4
	MOVW       R20, R2
	MOVW       R22, R4
L__init_serial44:
	LSL        R20
	ROL        R21
	ROL        R22
	ROL        R23
	DEC        R27
	BRNE       L__init_serial44
L__init_serial45:
	LDI        R16, 0
	LDI        R17, 18
	LDI        R18, 122
	LDI        R19, 0
	CALL       _Div_32x32_U+0
	MOVW       R16, R22
	MOVW       R18, R24
	SUBI       R16, 1
	SBCI       R17, 0
;serial.h,7 :: 		UBRRL = ubrr_value;
	OUT        UBRRL+0, R16
;serial.h,8 :: 		UBRRH = (ubrr_value>>8);
	MOV        R16, R17
	LDI        R17, 0
	OUT        UBRRH+0, R16
;serial.h,9 :: 		UCSRC=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	LDI        R27, 134
	OUT        UCSRC+0, R27
;serial.h,11 :: 		UCSRB=(1<<RXEN)|(1<<TXEN);
	LDI        R27, 24
	OUT        UCSRB+0, R27
;serial.h,12 :: 		}
L_end_init_serial:
	RET
; end of _init_serial

_trans_serial:

;serial.h,14 :: 		void trans_serial(char data1)
;serial.h,16 :: 		while(!(UCSRA & (1<<UDRE)));
L_trans_serial18:
	IN         R16, UCSRA+0
	SBRC       R16, 5
	JMP        L_trans_serial19
	JMP        L_trans_serial18
L_trans_serial19:
;serial.h,17 :: 		UDR=data1;
	OUT        UDR+0, R2
;serial.h,18 :: 		}
L_end_trans_serial:
	RET
; end of _trans_serial

_string_serial:

;serial.h,19 :: 		void string_serial(char *str)
;serial.h,21 :: 		while(*str!='\0')
L_string_serial20:
	MOVW       R30, R2
	LD         R16, Z
	CPI        R16, 0
	BRNE       L__string_serial48
	JMP        L_string_serial21
L__string_serial48:
;serial.h,23 :: 		trans_serial(*str);
	MOVW       R30, R2
	LD         R16, Z
	PUSH       R3
	PUSH       R2
	MOV        R2, R16
	CALL       _trans_serial+0
	POP        R2
	POP        R3
;serial.h,24 :: 		str++;
	MOVW       R16, R2
	SUBI       R16, 255
	SBCI       R17, 255
	MOVW       R2, R16
;serial.h,25 :: 		delay_ms(1);
	LDI        R17, 11
	LDI        R16, 99
L_string_serial22:
	DEC        R16
	BRNE       L_string_serial22
	DEC        R17
	BRNE       L_string_serial22
;serial.h,26 :: 		}
	JMP        L_string_serial20
L_string_serial21:
;serial.h,27 :: 		}
L_end_string_serial:
	RET
; end of _string_serial

_rec_serial:

;serial.h,29 :: 		unsigned char rec_serial()
;serial.h,31 :: 		while(!(UCSRA & (1<<RXC)));
L_rec_serial24:
	IN         R16, UCSRA+0
	SBRC       R16, 7
	JMP        L_rec_serial25
	JMP        L_rec_serial24
L_rec_serial25:
;serial.h,32 :: 		return UDR;
	IN         R16, UDR+0
;serial.h,33 :: 		}
L_end_rec_serial:
	RET
; end of _rec_serial

_main:
	LDI        R27, 255
	OUT        SPL+0, R27
	LDI        R27, 0
	OUT        SPL+1, R27
	IN         R28, SPL+0
	IN         R29, SPL+1
	SBIW       R28, 2
	OUT        SPL+0, R28
	OUT        SPL+1, R29
	ADIW       R28, 1

;MyProject.c,15 :: 		void main()
;MyProject.c,17 :: 		CTRL_DIR=0Xff;
	PUSH       R2
	PUSH       R3
	PUSH       R4
	PUSH       R5
	LDI        R27, 255
	OUT        DDRC+0, R27
;MyProject.c,18 :: 		LCD_DIR=0Xff;
	LDI        R27, 255
	OUT        DDRA+0, R27
;MyProject.c,19 :: 		init_lcd();
	CALL       _init_lcd+0
;MyProject.c,20 :: 		string_lcd("RFID test code");
	LDI        R27, #lo_addr(?lstr1_MyProject+0)
	MOV        R2, R27
	LDI        R27, hi_addr(?lstr1_MyProject+0)
	MOV        R3, R27
	CALL       _string_lcd+0
;MyProject.c,21 :: 		delay_ms(1000);
	LDI        R18, 41
	LDI        R17, 150
	LDI        R16, 128
L_main26:
	DEC        R16
	BRNE       L_main26
	DEC        R17
	BRNE       L_main26
	DEC        R18
	BRNE       L_main26
;MyProject.c,22 :: 		while(1)
L_main28:
;MyProject.c,24 :: 		init_serial(9600);
	LDI        R27, 128
	MOV        R2, R27
	LDI        R27, 37
	MOV        R3, R27
	LDI        R27, 0
	MOV        R4, R27
	MOV        R5, R27
	CALL       _init_serial+0
;MyProject.c,25 :: 		for(i=0;i<12;i++)
	LDI        R27, 0
	STS        _i+0, R27
	STS        _i+1, R27
L_main30:
	LDS        R18, _i+0
	LDS        R19, _i+1
	LDI        R16, 12
	LDI        R17, 0
	CP         R18, R16
	CPC        R19, R17
	BRLT       L__main51
	JMP        L_main31
L__main51:
;MyProject.c,27 :: 		temp[i]=rec_serial();
	LDI        R18, #lo_addr(_temp+0)
	LDI        R19, hi_addr(_temp+0)
	LDS        R16, _i+0
	LDS        R17, _i+1
	ADD        R16, R18
	ADC        R17, R19
	STD        Y+0, R16
	STD        Y+1, R17
	CALL       _rec_serial+0
	LDD        R17, Y+0
	LDD        R18, Y+1
	MOV        R30, R17
	MOV        R31, R18
	ST         Z, R16
;MyProject.c,25 :: 		for(i=0;i<12;i++)
	LDS        R16, _i+0
	LDS        R17, _i+1
	SUBI       R16, 255
	SBCI       R17, 255
	STS        _i+0, R16
	STS        _i+1, R17
;MyProject.c,28 :: 		}
	JMP        L_main30
L_main31:
;MyProject.c,29 :: 		cmd_lcd(0xc0);
	LDI        R27, 192
	MOV        R2, R27
	CALL       _cmd_lcd+0
;MyProject.c,30 :: 		for(i=0;i<12;i++)
	LDI        R27, 0
	STS        _i+0, R27
	STS        _i+1, R27
L_main33:
	LDS        R18, _i+0
	LDS        R19, _i+1
	LDI        R16, 12
	LDI        R17, 0
	CP         R18, R16
	CPC        R19, R17
	BRLT       L__main52
	JMP        L_main34
L__main52:
;MyProject.c,32 :: 		data_lcd(temp[i]);
	LDI        R18, #lo_addr(_temp+0)
	LDI        R19, hi_addr(_temp+0)
	LDS        R16, _i+0
	LDS        R17, _i+1
	MOVW       R30, R16
	ADD        R30, R18
	ADC        R31, R19
	LD         R16, Z
	MOV        R2, R16
	CALL       _data_lcd+0
;MyProject.c,30 :: 		for(i=0;i<12;i++)
	LDS        R16, _i+0
	LDS        R17, _i+1
	SUBI       R16, 255
	SBCI       R17, 255
	STS        _i+0, R16
	STS        _i+1, R17
;MyProject.c,33 :: 		}
	JMP        L_main33
L_main34:
;MyProject.c,34 :: 		delay_ms(1000);
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
;MyProject.c,35 :: 		}
	JMP        L_main28
;MyProject.c,36 :: 		}
L_end_main:
	POP        R5
	POP        R4
	POP        R3
	POP        R2
L__main_end_loop:
	JMP        L__main_end_loop
; end of _main
