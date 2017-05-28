	global	_ft_putchar

section .text

_ft_putchar:
	push	rbp
	mov		rbp, rsp
	push	rdi
	mov		rdi, 0x1
	lea		rsi, [rbp - 0x8]
	mov		rdx, 0x1
	mov		rax, 0x2000004
	syscall
	jc		Lerr
	mov		rax, 0x1
	mov		rsp, rbp
	pop		rbp
	ret

Lerr:
	mov		rax, 0x0
	ret