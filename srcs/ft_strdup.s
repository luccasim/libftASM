	global _ft_strdup
	extern _ft_strlen
	extern _malloc

section .text

_ft_strdup:
	enter			0x10, 0x0			;Enter creates a stack frame
	cmp				rdi, 0x0
	je				Lerr
	push			rdi
	call			_ft_strlen
	mov				rdi, rax
	inc				rdi
	mov				rcx, rax
	push			rcx
	call			_malloc
	cmp				rax, 0x0
	je				Lerr
	pop				rcx
	pop				rsi
	mov				rdi, rax
	rep				movsb				; cpy rsi in rd
	mov				byte [rdi + rcx], 0

Lerr:
	leave
	ret