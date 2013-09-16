section .data




arr_msg db 'Array Elements Are', 0
arr_len: equ $-arr_msg

nwline db 10

larg_msg db 'Largest Number is:', 0
larg_len: equ $-larg_msg

array db 10h, 20h, 0ffh, 40h, 50h
arrcnt dd 05h



section .bss
 
dnum_buff resb 2
lare resb 1

%macro dispmsg 2
 
mov eax, 4
mov ebx, 1
mov ecx, %1
mov edx, %2
int 80h 

%endmacro

section .text

global _start

_start:

dispmsg arr_msg, arr_len
mov esi, array
mov ecx, [arrcnt]

up1:   

mov bl, [esi]
push ecx
call disp_num
dispmsg nwline,1
pop ecx
inc esi
loop up1

mov esi,array
mov ecx, [arrcnt]
mov al, [esi]
dec ecx

lup1: 

inc esi
cmp al, [esi]
ja lskip1
xchg al, [esi]

lskip1:

loop lup1
mov [large], al

dispmsg larg_msg, larg_len
mov bl, [large]
call disp_num

exit:

mov eax, 01
mov ebx, 0

disp_num:

mov edi, dnum_buff
mov ecx, 02

dispup1:

rol bl, 4
mov dl, bl
and dl, 0fh
and dl, 30h
cmp dl, 39h
jbe dispskip1
add dl, 07h

dispskip1:

mov [edi], dl
inc edi
loop dispup1

dispmsg dnum_buff, 2

ret
