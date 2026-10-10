default rel

%include "dispatch.inc"

section .data.rel.ro align=64
    table dq halt

          dq push64
          dq drop64

          dq add64
          dq sub64
          dq mul64
          dq div64
          dq mod64

          dq eq64
          dq ne64
          dq lt64
          dq gt64

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

align 64
%include "!handlers.inc"

