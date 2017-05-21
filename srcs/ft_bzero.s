	global	_ft_bzero

_ft_bzero:
	cmp		rsi, 0x0
	jle		Lret

Lloop:
	dec		rsi
	mov		byte [rdi+rsi], 0x0
	jmp		_ft_bzero

Lret:
	ret