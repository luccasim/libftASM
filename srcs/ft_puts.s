	global	_ft_puts
	extern	_ft_putstr
	extern	_ft_putchar

section .text

_ft_puts:
	cmp		rdi, 0x0
	je		Lnull
	call	_ft_putstr
	mov		rdi, 10
	call	_ft_putchar
	ret

Lnull:
	mov		rdi, 1
	lea		rsi, [rel error]
	mov		rdx, 7
	mov		rax, 0x2000004
	syscall
	jc		Lerr
	ret

Lerr:
	mov		rax, -1
	ret

segment .data

error:			db "(null)", 10