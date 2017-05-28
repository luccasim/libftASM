	global _ft_isalpha

section .text

_ft_isalpha:
	cmp			rdi, 0x41
	jl			Lnalpha			; jump less
	cmp			rdi, 0x5a
	jg			Lmaj			; jump greater
	jmp			exit

Lmaj:
	cmp			rdi, 0x61
	jl			Lnalpha			; jump less
	cmp			rdi, 0x7a
	jle			exit			; jump equal less

Lnalpha:
	xor			rax, rax
	ret

exit:
	mov			rax, 0x1
	ret