; hMsg and hRet must be registers that can be used for base-index ops

.code
wndToBoard MACRO hMsg, hRet
	MOV eax, (WNDMSG PTR [hMsg]).uMsg
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
wndToBoardhBr
; @ Params:		eax:	wnd color code
; @ Result:		al:		sqrColor code

ENDM

boardToWnd MACRO hMsg, hRet
	
ENDM

boardToMove MACRO hMsg, hRet
	
ENDM

moveToBoard MACRO hMsg, hRet
	
ENDM