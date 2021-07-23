global _start

section .rdata
	msg db "Hello, world!", 0x0a ; declare string data
	len equ $ - msg ; length of string

section .text
_start:
	mov ebx, 42 ; exit status 42
	mov eax, 1 ; exit status system call
	cmp ecx, 100 ; compare ecx to 100
	;jmp skip ; jump to skip label
	jl skip ; jump if ecx < 100
	mov ebx, 13 ; exit status 13

skip:
	int 0x80 ; interupt to exit program