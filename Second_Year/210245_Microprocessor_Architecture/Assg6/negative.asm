section .data 
new: db 10 
msg1: db "positive no.",10,0 
msg2: db "negative no.",10,0
msg1_len: equ $-msg1 
msg2_len: equ $-msg2 
arr: dd 23,-21,2456,345,-222 
ncount: db 0 
pcount: db 0

section .text

%macro write_syscall 2

mov eax,4
mov ebx,1
mov ecx,%1
mov edx,%2
int 80h
%endmacro

global _start

_start:

mov ebx,0
mov ecx,5

loop1:
mov eax,[arr+ebx*4]
xor eax,0
js ncounter
inc byte[pcount]

ncounter:
inc byte[ncount]
jmp next

next:


inc ebx
dec ecx
jnz loop1

add byte[pcount],'0'
add byte[ncount],'0'

write_syscall msg1, msg1_len
write_syscall pcount, 1
write_syscall new, 1
write_syscall msg2, msg2_len
write_syscall ncount, 1
write_syscall new, 1


mov eax, 1
mov ebx, 0
int 80h
