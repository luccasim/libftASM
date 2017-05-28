    global	_ft_strlen

section .text

_ft_strlen:
    push           rdi
    cmp		       rdi, 0x0
    je		       Lerr
    xor		       rcx, rcx
    not		       rcx
    cld
    xor		       rax, rax
    repnz	       scasb          ; boucle sur rcx
    not		       rcx
    dec		       rcx
    mov		       rax, rcx
    pop            rdi
    ret

Lerr:
    xor		       rax, rax
    ret
