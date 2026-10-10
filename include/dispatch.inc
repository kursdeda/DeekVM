%macro dispatch 0
    movzx rax, byte [rsi]
    inc rsi
    jmp qword [r12 + rax * 8]
%endmacro