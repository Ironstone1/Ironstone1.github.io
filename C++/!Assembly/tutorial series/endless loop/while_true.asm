global _start

section .rdata
	db 0

section .text
_start:
loop1:
	jmp loop1 ; jump to label
	mov eax, 1 ; system call
	int 0x80 ; system interupt