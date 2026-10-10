;
;   ARITHMETIC
;

add64:
    mov rax, [rdi-8]
    add [rdi-16], rax
    sub rdi, 8
    dispatch

sub64:
    mov rax, [rdi-8]
    sub [rdi-16], rax
    sub rdi, 8
    dispatch

mul64:
    mov rax, [rdi-16]
    mov rdx, [rdi-8]
    imul rax, rdx
    mov [rdi-16], rax
    sub rdi, 8
    dispatch

div64:
    mov rax, [rdi-16]
    mov r8, [rdi-8]
    cqo
    idiv r8
    mov [rdi-16], rax
    sub rdi, 8
    dispatch

mod64:
    mov rax, [rdi-16]
    mov r8, [rdi-8]
    cqo
    idiv r8
    mov [rdi-16], rdx
    sub rdi, 8
    dispatch