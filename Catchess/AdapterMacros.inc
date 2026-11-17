; hMsg and hRet must be registers that can be used for base-index ops

.code
wndToBoard MACRO hSrc, hDest
	MOV eax, (WNDMSG PTR [hSrc]).pt
	wndToBoardPt
	MOV (WNDMSG PTR [hDest]).bc, ax

	MOV eax, (WNDMSG PTR [hSrc]).img
	wndToBoardImg
	MOV (WNDMSG PTR [hDest]).pc

	MOV eax, (WNDMSG PTR [hSrc]).br
	wndToBoardBr
	MOV (WNDMSG PTR [hDest]).sqrColor
ENDM

; @ Description: Converts a point to a board coord
wndToBoardPt MACRO
; @ Params:		eax:	point value
; @ Result:		ax:		board coord value
	
ENDM

; @ Description: Converts an image code to a piece code
wndToBoardImg
; @ Params:		eax:	image code
; @ Result:		al:		piece code

ENDM

; @ Description: Converts a wnd color code a board sqrColor code
wndToBoardBr
; @ Params:		eax:	wnd color code
; @ Result:		al:		sqrColor code

ENDM

boardToWnd MACRO hSrc, hDest
	
ENDM

; @ Description: Converts a board coord to a point
boardToWndBc MACRO
; @ Params:		eax:	board coord value
; @ Result:		ax:		point value
	
ENDM

; @ Description: Converts an image code to a piece code
boardToWndPc
; @ Params:		eax:	piece code
; @ Result:		al:		image code

ENDM

; @ Description: Converts sqrColor code a wnd color code
wndToBoardSqrColor
; @ Params:		eax:	sqrColor code
; @ Result:		al:		wnd color code

ENDM

boardToMove MACRO hSrc, hDest
	
ENDM

moveToBoard MACRO hSrc, hDest
	
ENDM