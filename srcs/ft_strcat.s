    global _ft_strcat
    extern _ft_strlen

section .text

_ft_strcat:
    mov         rax, rdi
    mov         cl, [rax]
    cmp         cl, 0x0
    jz          Lstart                  ; jump zero

Lgetlen:
    inc         rax
    mov         cl, [rax]
    cmp         cl, 0x0
    jnz         Lgetlen                 ; jump not zero

Lstart:
    sub         rax, rdi
    xor         rcx, rcx

Lloop:
    cmp         byte [rsi + rcx], 0x0
    jle         Lret                    ; jump less equals
    mov         rdx, [rsi + rcx]
    mov         [rdi + rax], rdx
    inc         rcx
    inc         rax
    jmp         Lloop                   ; jump Lloop

Lret:
    mov         rdx, 0x0
    mov         [rdi + rax], rdx
    mov         rax, rdi
    ret