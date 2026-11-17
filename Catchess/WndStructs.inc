; Structs
MSGSTRUCT STRUCT
	hWnd DWORD ?
	message DWORD ?
	wParam DWORD ?
	lParam DWORD ?
	time DWORD ?
	pt DWORD ?
	lPrivate DWORD ?
MSGSTRUCT ENDS

POINT STRUCT
	x WORD ?
	y WORD ?
POINT ENDS

; Mirrors MOVESTRUCT used in BoardManager with Wnd relevant data
WNDMSG STRUCT
	uMsg DWORD ?
	pt POINT <>
	hImg DWORD ?
	hBr DWORD ?
WNDMSG ENDS