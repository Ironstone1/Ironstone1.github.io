global _start

section .rdata
	db 0

section .text
_start:
	mov ebx, 1 ; start ebx 1
	mov ecx, 4 ; number of iterations

loop1:
	add ebx, ebx ; ebx += ebx
	dec ecx ; ecx -= 1 decremment subtract 1
	cmp ecx, 0 ; compare ecx to 0
	jg loop1 ; jump to label
	mov eax, 1 ; system call
	int 0x80 ; system interupt