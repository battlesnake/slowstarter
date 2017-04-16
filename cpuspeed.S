.intel_syntax noprefix

.global calc

calc:
	mov rcx, rdi

	rdtsc
	shl rdx, 32
	or rax, rdx

	mov r8, rax

calc_loop:
	dec rcx
	jnz calc_loop

	rdtsc
	shl rdx, 32
	or rax, rdx

	sub rax, r8

	ret
