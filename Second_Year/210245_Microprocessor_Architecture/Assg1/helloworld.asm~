section .data                
msg:db 'Hello World',10      ;message and newline
msg_l: equ $-msg
section .text
global _start                ;global entry point export for ld
_start:
mov eax,4                    ;sys_write call
mov ebx, 1                   ;stdout
mov ecx, msg                 ;message address
mov edx, msg_l               ;message string length
int 80h
;system exit
mov eax, 1                   ;system exit call
mov ebx, 0                   ;return 0
int 80h
