global _start

section .rdata
db 0

section .text
_start:
	; move data to register
	mov eax, 1
	mov ebx, 42
	
	; subtract value from register
	sub ebx, 29
	
	mov ebx, 123 ; ebx = 123
	mov eax, ebx ; eax = ebx
	add ebx, ecx ; ebx += ecx
	sub ebx, edx ; ebx -= edx
	mul ebx ; eax *= ebx
	div edx ; eax /= edx
	
	; system interupt
	int 0x80