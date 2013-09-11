;
;
;

section .data

msg:db "The result is:",10,0
len:equ $-msg
arr: dd 5555h,5555h,5555h,5555h,5555h

section .bss

count: resb 1
result: resb 10
input: resb 1

section .text

_start:

main:

mov edx,len
mov ecx, msg
mov ebx, 1
mov eax, 4
int 80h

mov byte[count],5
mov eax,0
mov esi,arr

Loop1: 
add eax, [esi]
add esi,04
dec byte[count]
jnz loop1






