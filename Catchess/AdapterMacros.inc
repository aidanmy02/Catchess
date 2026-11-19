; hMsg and hRet must be registers that can be used for base-index ops

.code
wndToBoard MACRO hSrc, hDest
	MOV eax, (WNDMSG PTR [hSrc]).pt
	wndToBoardPt
	MOV (BOARDMSG PTR [hDest]).coord, ax

	MOV eax, (WNDMSG PTR [hSrc]).img
	wndToBoardImg
	MOV (BOARDMSG PTR [hDest]).pc, al

	MOV eax, (WNDMSG PTR [hSrc]).br
	wndToBoardBr
	MOV (BOARDMSG PTR [hDest]).sqrColor, al
ENDM

; @ Description: Converts a point to a board coord
wndToBoardPt MACRO sqrLen, pt
; @ Params:		sqrLen	-	size of a square in the window
;				pt		-	a point with x and y as words
;
; @ Result:		ax:		board coord value
	
ENDM

; @ Description: Converts an image code to a piece code
wndToBoardImg MACRO imgCode
; @ Params:		imgCode:	the code for the image of the piece
; @ Result:		al:			piece code

ENDM

; @ Description: Converts a wnd color code a board sqrColor code
wndToBoardBr MACRO colorCode
; @ Params:		colorCode:	code for the color of the square in window
; @ Result:		al:			sqrColor code

ENDM

boardToWnd MACRO hSrc, hDest
	
ENDM

; @ Description: Converts a board coord to a point
boardToWndBc MACRO
; @ Params:		eax:	board coord value
; @ Result:		ax:		point value
	
ENDM

; @ Description: Converts an image code to a piece code
boardToWndPc MACRO
; @ Params:		eax:	piece code
; @ Result:		al:		image code

ENDM

; @ Description: Converts sqrColor code a wnd color code
wndToBoardSqrColor MACRO
; @ Params:		eax:	sqrColor code
; @ Result:		al:		wnd color code

ENDM

boardToMove MACRO hSrc, hDest
	
ENDM

moveToBoard MACRO hSrc, hDest
	
ENDM