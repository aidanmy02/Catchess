; hMsg and hRet must be registers that can be used for base-index ops

.code
wndToBoard MACRO hMsg, hRet
	MOV eax, (WNDMSG PTR [hMsg]).uMsg
ENDM

; @ Description: Converts a point structure to a BOARDCOORD
wndToBoardPt MACRO
	
ENDM

; @ Description: Converts an image code to a piece code
wndToBoardhImg

ENDM

; @ Description: Converts a wnd color code a board sqrColor
wndToBoardhBr

ENDM

boardToWnd MACRO hMsg, hRet
	
ENDM

boardToMove MACRO hMsg, hRet
	
ENDM

moveToBoard MACRO hMsg, hRet
	
ENDM