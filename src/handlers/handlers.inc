;
;   HANDLERS
;

halt:
    add rsp, 8
    pop rbx
    pop r12
    ret

push64:
    mov rax, [rsi]
    mov [rdi], rax
    add rsi, 8
    add rdi, 8
    dispatch