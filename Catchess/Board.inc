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