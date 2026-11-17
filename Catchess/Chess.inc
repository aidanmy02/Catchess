; Assembler Directives
.386
.model flat,stdcall
.stack 4096
OPTION PROC:PRIVATE

; Windows SDK Libraries
INCLUDELIB User32.lib	; Sources:	Textbook and https://learn.microsoft.com/en-us/cpp/assembler/masm/includelib-masm?view=msvc-170
						;			https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-registerclassa

; Global Constants
NULL EQU 0
FALSE EQU 0
TRUE EQU 1

; CODES
; WndProc Codes
; Source: https://www.autoitscript.com/autoit3/docs/appendix/WinMsgCodes.htm
WM_CREATE EQU 1
WM_DESTROY EQU 2
WM_PAINT EQU 0Fh
WM_SQR EQU 8001h

; BoardProc Codes
BP_INIT EQU 0
BP_CONT EQU 1
BP_COLOR EQU 2
BP_MOVE EQU 3
BP_ENPASSANT EQU 4
BP_CASTLE EQU 5
BP_CHECK EQU 7
BP_TESTCHECK EQU 8
BP_TESTMATE EQU 9

; MoveProc Codes
MV_CHECK EQU 1
MV_CHECKED EQU 2
MV_TESTCHECK EQU 3
MV_TESTMATE EQU 4

; HeapAlloc Codes
HEAP_ZERO_MEMORY EQU 8

; ShowWindow Codes
SW_NORMAL EQU 1
SW_SHOWDEFAULT EQU 10

; Colors
COLOR_WHITE EQU 0FFCFCFh
COLOR_BLACK EQU 292817h
COLOR_TRANS EQU 0FFFFFFh
COLOR_HL EQU 03131A0h
COLOR_CHECKHL EQU 077342Eh
COLOR_CHECKMATEHL EQU 0FFFFFFh

; Color Codes
WHITE EQU 0
BLACK EQU 1
HL EQU 2
CHECKHL EQU 3
CHECKMATEHL EQU 4

; Piece Codes
WPAWN EQU 'P'
WROOK EQU 'R'
WKNIGHT EQU 'N'
WBISHOP EQU 'B'
WQUEEN EQU 'Q'
WKING EQU 'K'
BPAWN EQU 'p'
BROOK EQU 'r'
BKNIGHT EQU 'n'
BBISHOP EQU 'b'
BQUEEN EQU 'q'
BKING EQU 'k'

; Structs
; Coordinate
COORDSTRUCT STRUCT
	x WORD ?
	y WORD ?
COORDSTRUCT ENDS

; Move
MOVESTRUCT STRUCT
	uMsg DWORD ?
	coord COORDSTRUCT <>
	piece BYTE ?
	sqrColor BYTE ?
MOVESTRUCT ENDS

BOARDSTRUCT STRUCT
	_a BYTE WROOK,	WPAWN,	0,	0,	0,	0,	BPAWN,	BROOK
	_b BYTE WKNIGHT,WPAWN,	0,	0,	0,	0,	BPAWN,	BKNIGHT
	_c BYTE WBISHOP,WPAWN,	0,	0,	0,	0,	BPAWN,	BBISHOP
	_d BYTE WQUEEN,	WPAWN,	0,	0,	0,	0,	BPAWN,	BQUEEN
	_e BYTE WKING,	WPAWN,	0,	0,	0,	0,	BPAWN,	BKING
	_f BYTE WBISHOP,WPAWN,	0,	0,	0,	0,	BPAWN,	BBISHOP
	_g BYTE WKNIGHT,WPAWN,	0,	0,	0,	0,	BPAWN,	BKNIGHT
	_h BYTE WROOK,	WPAWN,	0,	0,	0,	0,	BPAWN,	BROOK
BOARDSTRUCT ENDS

EXTERNDEF move:MOVESTRUCT
EXTERNDEF hWndMain:DWORD
EXTERNDEF prevMove:MOVESTRUCT

; Subroutine Prototypes
BoardProc PROTO

main PROTO

init PROTO

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-winmain
;		  https://learn.microsoft.com/en-us/windows/win32/winmsg/using-messages-and-message-queues
WinMain PROTO,			hInstance:DWORD,\
						hPrevInstance:DWORD,\
						lpCmdLine:DWORD,\
						nShowCmd:DWORD

