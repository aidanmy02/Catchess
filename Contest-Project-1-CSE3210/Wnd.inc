; System Call Prototypes and Sources for Information
; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-adjustwindowrect
AdjustWindowRect PROTO,	lpRect:DWORD,\
						dwStyle:DWORD,\
						bMenu:BYTE				; BOOL

; Source: https://learn.microsoft.com/en-us/previous-versions/ms961291(v=msdn.10)
BeginPaint PROTO,		hWnd:DWORD,\
						lpPaint:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-createcompatibledc
;		  https://learn.microsoft.com/en-us/previous-versions/windows/embedded/ee504566(v=winembedded.60)?redirectedfrom=MSDN
CreateCompatibleDC PROTO,	hDC:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-createsolidbrush
CreateSolidBrush PROTO,	color:DWORD

; Sources: https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread
;		   https://learn.microsoft.com/en-us/windows/win32/procthread/creating-threads
CreateThread PROTO,		lpThreadAttributes:DWORD,\
						dwStackSize:DWORD,\
						lpStartAddress:DWORD,\
						lpParameter:DWORD,\
						dwCreationFlags:DWORD,\
						lpThreadId:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-createwindowexa
CreateWindowExA PROTO,	dwExStyle:DWORD,\
						lpClassName:DWORD,\
						lpWindowName:DWORD,\
						dwStyle:DWORD,\
						x:DWORD,\
						y:DWORD,\
						nWidth:DWORD,\
						nHeight:DWORD,\
						hWndParent:DWORD,\
						hMenu:DWORD,\
						hInstance:DWORD,\
						lpParam:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-defwindowproca
DefWindowProcA PROTO,	hWnd:DWORD,\
						uMsg:DWORD,\
						wParam:DWORD,\
						lParam:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-dispatchmessage
DispatchMessageA PROTO,	lpMsg:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitprocess
ExitProcess PROTO,		dwExitCode:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitthread
ExitThread PROTO,		dwExitCode:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-endpaint
EndPaint PROTO,			hWnd:DWORD,\
						lpPaint:DWORD			; pointer to PAINTSTRUCT

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-fillrect
FillRect PROTO,			hDC:DWORD,\
						lprc:DWORD,\			; pointer to RECT
						hbr:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getdc
GetDC PROTO,			hWnd:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getmessage
GetMessageA PROTO,		lpMsg:DWORD,\
						hWnd:DWORD,\
						wMsgFilterMin:DWORD,\
						wMsgFilterMax:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulehandlea
GetModuleHandleA PROTO,	lpModuleName:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-loadcursora
LoadCursorA PROTO,		hInstance:DWORD,\
						lpCursorName:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-loadimagea
LoadImageA PROTO,		hInstance:DWORD,\
						lpName:DWORD,\
						uType:DWORD,\
						cxDesired:DWORD,\
						cyDesired:DWORD,\
						uFlags:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messageboxa					;
MessageBoxA PROTO,		hWnd:DWORD,\
						lpTEXT:DWORD,\
						lpCaption:DWORD,\
						uType:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-postmessagea
PostMessageA PROTO,		hWnd:DWORD,\
						msg:DWORD,\
						wParam:DWORD,\
						lParam:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-postquitmessage
PostQuitMessage PROTO,	nExitCode:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-registerclassa
RegisterClassExA PROTO,	wndClassPTR:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-selectobject
;		  https://learn.microsoft.com/en-us/previous-versions/windows/embedded/ee504566(v=winembedded.60)?redirectedfrom=MSDN
SelectObject PROTO,		hDC:DWORD,\
						hObject:DWORD

; Source: https://learn.microsoft.com/en-us/cpp/c-runtime-library/lock?view=msvc-170
SendMessageA PROTO,		hWnd:DWORD,\
						Msg:DWORD,\
						wParam:DWORD,\
						lParam:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-showwindow
ShowWindow PROTO,		hWnd:DWORD,\
						nCmdShow:DWORD

; Source: https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-transparentblt
TransparentBlt PROTO,	hdcDest:DWORD,\
						xoriginDest:DWORD,\
						yoriginDest:DWORD,\
						wDest:DWORD,\
						hDest:DWORD,\
						hdcSrc:DWORD,\
						xoriginSrc:DWORD,\
						yoriginSrc:DWORD,\
						wSrc:DWORD,\
						hSrc:DWORD,\
						crTransparent:DWORD