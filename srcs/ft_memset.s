	global _ft_memset

section .text

_ft_memset:
	push		rdi	
	mov			rax, rsi
	mov			rcx, rdx
	cld							; reset direction flag
	rep			stosb			; replace each byte of rdi by the rax content
	pop			rax	
	ret