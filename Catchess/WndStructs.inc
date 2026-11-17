; Structs
; For message loop
MSGSTRUCT STRUCT
	hWnd DWORD ?
	message DWORD ?
	wParam DWORD ?
	lParam DWORD ?
	time DWORD ?
	pt DWORD ?
	lPrivate DWORD ?
MSGSTRUCT ENDS

; For sending and receiving points from the window
POINT STRUCT
	x WORD ?
	y WORD ?
POINT ENDS

; Mirrors MOVESTRUCT used in BoardManager with Wnd relevant data
WNDMSG STRUCT
	uMsg DWORD ?
	pt POINT <>
	img DWORD ?
	br DWORD ?
WNDMSG ENDS