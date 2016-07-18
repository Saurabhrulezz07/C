	.file	"test.c"
	.section	.rodata
.LC1:
	.string	"%f"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	$10, 24(%esp)
	fildl	24(%esp)
	fldl	.LC0
	fmulp	%st, %st(1)
	fildl	24(%esp)
	fmulp	%st, %st(1)
	fstps	28(%esp)
	flds	28(%esp)
	fstpl	4(%esp)
	movl	$.LC1, (%esp)
	call	printf
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
