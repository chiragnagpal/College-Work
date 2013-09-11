; 12/09/2012
; ALP to find the avg of 5, 32 bit numbers
; Chirag Nagpal
; 3216

section .data

msg: db "The result is:",10,0
len: equ $-msg
arr: dd 5555h,5555h,5555h,5555h,5555h

section .bss

count:  resb 1
result: resb 10
input:  resb 1

section .text

_start:

main:

mov edx, len
mov ecx, msg
mov ebx, 1
mov eax, 4
int 80h

mov byte[count], 5
mov eax, 0
mov esi, arr

Loop1: 
add eax, [esi]
add esi, 04
dec byte[count]
jnz loop1

l1:
rol ebx, 04h
mov dl, bl
and dl, 0fh
cmp dl, 09h
jbe l2
add dl, 07h

l2:
add d1, 30h





