	extern printf
	section .data
        msg db "Hello, Holberton", 0
        fmt db "%s", 10, 0		 ; The printf format, "\n", '0'

	section .text
	global main
main:
	push rbp

	mov  rdi,fmt
	mov  rsi,msg
	mov  rax,0
	call printf
	pop  rbp		; restore stack
	mov  rax,0		; normal, no error, return value
	ret
