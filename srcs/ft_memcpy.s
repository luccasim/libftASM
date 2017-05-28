	global _ft_memcpy

section .text

_ft_memcpy:
	push		rdi
	mov			rcx, rdx
	cld							; reset the direction flag
	rep			movsb			; (cpy rsi in rdi)
	pop			rdi
	mov			rax, rdi
	ret