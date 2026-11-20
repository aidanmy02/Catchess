; hMsg and hRet must be registers that can be used for base-index ops

; @ Description: Converts a point to a board coord
wndToBoardPt MACRO sqrLen, pt
; @ Params:		sqrLen	-	size of a square in the window
;				pt		-	a point with x and y as words
;
; @ Result:		ax:		board coord value
	PUSH ebx
	PUSH edx
	
	PUSH sqrLen	; Move with push/pop in case eax, ebx are params
	PUSH pt		;
	POP eax		;
	POP ebx		;
	
	XOR edx, edx; Get x coord of board coord
	DIV bx		;
	INC ax		;

	ROR eax, 16	; Move high word into ax
	XOR edx, edx; Get y coord of board coord
	DIV bx		;
	INC ax		;

	MOVZX ebx, ax	; Put coords in correct position
	ROR eax, 16		;
	MOV ah, bl		;

	POP edx
	POP ebx
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