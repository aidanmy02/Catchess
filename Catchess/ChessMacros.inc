; @ Description: Copies data from one struct to another of the same type
copyStruct MACRO structSize, hSrc, hDest
; @ Params:		structSize	-		Size of the struct
;				hSrc		-		Address of source struct
;				hDest		-		Address of destination struct
	PUSH edi
	PUSH esi
	PUSH ecx

	MOV ecx, structSize
	MOV esi, hSrc
	MOV edi, hDest
	REP MOVSB

	POP ecx
	POP esi
	POP edi

ENDM