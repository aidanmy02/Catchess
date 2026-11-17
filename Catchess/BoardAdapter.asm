INCLUDE Chess.inc
INCLUDE WndStructs.inc
INCLUDE WndCodes.inc
INCLUDE BoardStructs.inc
INCLUDE WndCodes.inc
INCLUDE AdapterCodes.inc

.code
; @ Description: Converts a struct containing data to BOARDMSG format
BoardAdapter PROC
; @ Params:		eax -	Contains code for the type of struct to be converted
;				stack - Address for struct to be converted
;
; @ Return:		void

BoardAdapter ENDP
END