	global	_ft_isprint

section .text

_ft_isprint:
	cmp			rdi, 0x20
	jl			exit
	cmp			rdi, 0x7e
	jg			exit
	mov			rax, 0x1
	ret

exit:
	xor			rax, rax
	ret