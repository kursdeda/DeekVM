;
;   LOGIC
;

eq64:
    mov rax, [rdi-16]
    cmp rax, [rdi-8]

    je .yes
    mov [rdi-16], qword 0x00
    jmp .end

    .yes:
    mov [rdi-16], qword 0x01

    .end:
    sub rdi, 8
    dispatch

ne64:
    mov rax, [rdi-16]
    cmp rax, [rdi-8]

    jne .yes
    mov [rdi-16], qword 0x00
    jmp .end

    .yes:
    mov [rdi-16], qword 0x01

    .end:
    sub rdi, 8
    dispatch

lt64:
    mov rax, [rdi-16]
    cmp rax, [rdi-8]

    jl .yes
    mov [rdi-16], qword 0x00
    jmp .end

    .yes:
    mov [rdi-16], qword 0x01

    .end:
    sub rdi, 8
    dispatch

gt64:
    mov rax, [rdi-16]
    cmp rax, [rdi-8]

    jg .yes
    mov [rdi-16], qword 0x00
    jmp .end

    .yes:
    mov [rdi-16], qword 0x01

    .end:
    sub rdi, 8
    dispatch