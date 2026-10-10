;
;   STACK
;

push64:
    mov rax, [rsi]
    mov [rdi], rax
    add rsi, 8
    add rdi, 8
    dispatch

drop64:
    sub rdi, 8
    dispatch