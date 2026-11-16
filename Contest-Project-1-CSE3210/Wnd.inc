; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-adjustwindowrect
AdjustWindowRect PROTO,	lpRect:DWORD,\
						dwStyle:DWORD,\
						bMenu:BYTE				; BOOL

; Source: https://learn.microsoft.com/en-us/previous-versions/ms961291(v=msdn.10)
BeginPaint PROTO,		hWnd:DWORD,\
						lpPaint:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-createcompatibledc
;		  https://learn.microsoft.com/en-us/previous-versions/windows/embedded/ee504566(v=winembedded.60)?redirectedfrom=MSDN
CreateCompatibleDC PROTO,	hDC:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-createsolidbrush
CreateSolidBrush PROTO,	color:DWORD
