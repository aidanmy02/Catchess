INCLUDE Chess.inc
INCLUDE ChessMacros.inc
INCLUDE WndStructs.inc
INCLUDE WndCodes.inc
INCLUDE BoardStructs.inc
INCLUDE WndCodes.inc
INCLUDE AdapterCodes.inc
INCLUDE AdapterMacros.inc

.data
boardBuf BOARDMSG <>		; Buffers for info that needs to be transfered. All mutations happen to these.
wndBuf WNDMSG <>			;	Copying to external adapt structs don at the end

.code
; @ Description: Converts a struct containing data to BOARDMSG format
BoardAdapter PROC
; @ Params:		al -	Contains code for the type of struct to be converted
;				stack - Address for struct to be converted
;
; @ Return:		void
	PUSH ebp
	MOV ebp, esp

	PUSH esi
	MOV esi, [ebp + 8]

	CMP al, ADAPT_WNDMSG
	JZ adaptWndMsg
	CMP al, ADAPT_MOVEMSG
	JZ adaptMoveMsg

	adaptWndMsg:
		copyStruct sizeBoardMsg, esi, OFFSET wndBuf
		CALL WndToBoard
		JMP done

	adaptMoveMsg:
		moveToBoard esi, edi
		JMP done

	done:
	POP esi
	POP ebp
	RET 4
BoardAdapter ENDP

WndToBoard PROC 
	wndToBoardPt SQRLEN, wndBuf.pt
	MOV boardBuf.coord, ax

	wndToBoardImg wndBuf.img
	MOV boardBuf.pc, al

	wndToBoardBr wndBuf.br
	MOV boardBuf.sqrColor, al
WndToBoard ENDP

END