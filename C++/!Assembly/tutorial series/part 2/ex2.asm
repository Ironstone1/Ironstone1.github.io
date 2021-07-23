global _start

section .rdata
	msg db "Hello, world!", 0x0a ; declare string data
	len equ $ - msg ; length of string

section .text
_start:
	mov eax, 4 ; system call
	mov ebx, 1 ; stdout
	mov ecx, msg ; bytes to write to stdout
	mov ebx, len ; numbers of bytes to write
	int 0x80 ; preform system call
	mov eax, 1 ; system exit call
	mov ebx, 0 ; exit status 0
	int 0x80 ; preform system call