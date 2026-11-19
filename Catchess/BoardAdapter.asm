INCLUDE Chess.inc
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

	CMP al, ADAPT_WNDMSG
	JZ adaptWndMsg
	CMP al, ADAPT_MOVEMSG
	JZ adaptMoveMsg

	adaptWndMsg:
		wndToBoard esi, edi
		JMP done

	adaptMoveMsg:
		moveToBoard esi, edi
		JMP done

	done:
	RET 4
BoardAdapter ENDP
END