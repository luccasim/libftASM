	global	_ft_tolower
	extern	_ft_isupper

section .text

_ft_tolower:
	call		_ft_isupper
	cmp			rax, 0
	je			exit
	mov			rax, rdi
	add			rax, 0x20
	ret

exit:
	mov			rax, rdi
	ret