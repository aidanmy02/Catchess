; hMsg and hRet must be registers that can be used for base-index ops

.code
wndToBoard MACRO hMsg, hRet
	MOV eax, (WNDMSG PTR [hMsg]).uMsg
ENDM

boardToWnd MACRO hMsg, hRet
	
ENDM

boardToMove MACRO hMsg, hRet
	
ENDM

moveToBoard MACRO hMsg, hRet
	
ENDM