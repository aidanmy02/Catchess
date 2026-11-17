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

EXTERNDEF isEnPassant:BYTE

MoveProc PROTO
GetSqrContent PROTO

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-postmessagea
PostMessageA PROTO,		hWnd:DWORD,\
						msg:DWORD,\
						wParam:DWORD,\
						lParam:DWORD

; Source: https://learn.microsoft.com/en-us/cpp/c-runtime-library/lock?view=msvc-170
SendMessageA PROTO,		hWnd:DWORD,\
						Msg:DWORD,\
						wParam:DWORD,\
						lParam:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitthread
ExitThread PROTO,		dwExitCode:DWORD