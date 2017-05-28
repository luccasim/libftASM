	global	_ft_isascii

section .text

_ft_isascii:
	cmp			rdi, 0x0
	jl			exit			; jump si inferieur
	cmp			rdi, 0x7f
	jg			exit			; jump si superieur
	mov			rax, 0x1
	ret

exit:
	xor			rax, rax
	ret