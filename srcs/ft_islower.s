	global _ft_islower

section .text

_ft_islower:
	mov			rax, 0
	cmp			rdi, 'a'
	jl			exit
	cmp			rdi, 'z'
	jg			exit

true:
	xor			rax, 1

exit:
	ret