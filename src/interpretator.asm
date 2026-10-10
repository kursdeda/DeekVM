default rel

%include "dispatch.inc"

section .data.rel.ro align=64
    table dq halt
          dq push64

extern code
extern stck
extern data

global run
section .text

run:
    push r12
    push rbx
    sub rsp, 8

    lea r12, [rel table]
    lea rsi, [rel code]
    lea rdi, [rel stck]
    lea r11, [rel data]

    dispatch

%include "handlers.inc"

