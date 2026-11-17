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

; @ Description: Converts a point structure to a BOARDCOORD
wndToBoardPt MACRO
; @ Params:		eax:	contains point value
; @ Result:		ax:		contains BOARDCOORD value
	
ENDM

; @ Description: Converts an image code to a piece code
wndToBoardImg
; @ Params:		eax:	contains image code
; @ Result:		al:		piece code

ENDM

; @ Description: Converts a wnd color code a board sqrColor code
wndToBoardBr
; @ Params:		eax:	wnd color code
; @ Result:		al:		sqrColor code

ENDM

boardToWnd MACRO hMsg, hRet
	
ENDM

boardToMove MACRO hMsg, hRet
	
ENDM

moveToBoard MACRO hMsg, hRet
	
ENDM