	global	_ft_bzero

section .text

_ft_bzero:
	cmp			rsi, 0x0				; si size 0 exit
	jle			exit

Lloop:
	dec			rsi
	mov			byte [rdi+rsi], 0x0
	jmp			_ft_bzero

exit:
	ret