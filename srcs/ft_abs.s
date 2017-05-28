	global	_ft_abs

section .text

_ft_abs:
	test	edi, edi	; should use e register for neg
	jns		Lret
	neg		edi

Lret:
	mov		eax, edi
	ret