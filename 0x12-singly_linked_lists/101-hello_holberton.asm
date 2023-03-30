global main

extern printf

section .data
    msg db 'Hello, Holberton', 0
    format db '%s', 0

section .text
main:
    push rbp
    mov rbp, rsp

    mov rdi, format
    mov rsi, msg
    xor rax, rax
    call printf

    xor eax, eax
    pop rbp
    ret

