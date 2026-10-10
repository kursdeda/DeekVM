;
;   HANDLERS
;

halt:
    add rsp, 8
    pop rbx
    pop r12
    ret

%include "stack.inc"
%include "arithmetic.inc"
%include "logic.inc"