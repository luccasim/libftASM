	global	_ft_max

section .text

_ft_max:
	cmp		edi, esi
	jl		exit
	mov		eax, edi
	ret

exit:
	mov		eax, esi
	ret