    global _ft_cat

section .text

_ft_cat:
    push        rbp
    mov         rbp, rsp
    sub         rsp, 0x40
    push        rdi

Lread:
    mov         rsi, rsp
    mov         rdx, 0x40
    sub         rsi, rdx
    mov         rax, 0x2000003  ; read
    syscall
    jc          exit            ; jump carry flag
    js          exit            ; jump sign

Lwrite:
    mov         rdi, 0x1
    mov         rsi, rsp
    sub         rsi, 0x40
    mov         rdx, rax
    mov         rax, 0x2000004  ; write
    syscall                 
    cmp         rax, 0x0
    jle         exit            ; jump less equals
    pop         rdi
    push        rdi
    jmp         Lread           ; jump to label read

exit:
    pop         rdi
    add         rsp, 0x40
    pop         rbp
    ret