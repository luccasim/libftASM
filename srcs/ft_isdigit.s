	global	_ft_isdigit

section .text

_ft_isdigit:
	cmp			rdi, 0x30
	jl			exit			; jump less
	cmp			rdi, 0x39
	jg			exit			; jump greater
	mov			rax, 1
	ret

exit:
	xor			rax, rax
	ret