	global	_ft_min

section .text

_ft_min:
	cmp		esi, edi
	jl		exit
	mov		eax, edi
	ret

exit:
	mov		eax, esi
	ret