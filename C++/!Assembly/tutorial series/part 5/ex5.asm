global _start

section .rdata
	addr db "yellow"

section .text
_start:
	mov eax, 4 ; system write call
	mov ebx, 1 ; stdout
	mov ecx, addr ; bytes to write
	mov edx, 6 ; number of bytes to write
	int 0x80 ; system call
	mov eax, 1 ; system exit call
	mov ebx, 0 ; exit status 0
	int 0x80 ; system call