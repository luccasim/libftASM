	global	_ft_toupper
	extern	_ft_islower

section .text

_ft_toupper:
	call		_ft_islower
	cmp			rax, 0
	je			exit
	mov			rax, rdi
	sub			rax, 0x20
	ret

exit:
	mov			rax, rdi
	ret