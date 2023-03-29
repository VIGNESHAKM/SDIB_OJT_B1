	.file	"p3.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "\12\12 Create a file (test.txt) and input text :\0"
	.align 4
LC1:
	.ascii "----------------------------------------------\0"
LC2:
	.ascii "w\0"
LC3:
	.ascii " Error in opening file!\0"
	.align 4
LC4:
	.ascii " Input a sentence for the file : \0"
	.align 4
LC5:
	.ascii "\12 The file %s created successfully...!!\12\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$1040, %esp
	call	___main
	movl	$1953719668, 16(%esp)
	movl	$1954051118, 20(%esp)
	movl	$0, 24(%esp)
	movl	$0, 28(%esp)
	movl	$0, 32(%esp)
	movl	$LC0, (%esp)
	call	_puts
	movl	$LC1, (%esp)
	call	_puts
	movl	$LC2, 4(%esp)
	leal	16(%esp), %eax
	movl	%eax, (%esp)
	call	_fopen
	movl	%eax, 1036(%esp)
	cmpl	$0, 1036(%esp)
	jne	L2
	movl	$LC3, (%esp)
	call	_printf
	movl	$1, (%esp)
	call	_exit
L2:
	movl	$LC4, (%esp)
	call	_printf
	movl	__imp___iob, %eax
	movl	%eax, 8(%esp)
	movl	$1000, 4(%esp)
	leal	36(%esp), %eax
	movl	%eax, (%esp)
	call	_fgets
	movl	1036(%esp), %eax
	movl	%eax, 4(%esp)
	leal	36(%esp), %eax
	movl	%eax, (%esp)
	call	_fputs
	movl	1036(%esp), %eax
	movl	%eax, (%esp)
	call	_fclose
	leal	16(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_fopen;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_exit;	.scl	2;	.type	32;	.endef
	.def	_fgets;	.scl	2;	.type	32;	.endef
	.def	_fputs;	.scl	2;	.type	32;	.endef
	.def	_fclose;	.scl	2;	.type	32;	.endef
