	global _ft_isupper

section .text

_ft_isupper:
	mov			rax, 0
	cmp			rdi, 'A'
	jl			exit
	cmp			rdi, 'Z'
	jg			exit

true:
	xor			rax, 1

exit:
	ret