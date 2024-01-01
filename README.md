# ft_printf - Because ft_putnbr() and ft_putstr() aren’t enough

## Summary

The goal of this project is to recode printf(), a popular and versatile C function, allowing you to improve your programming skills and learn about variadic functions in C. The project is of moderate difficulty and provides a great opportunity to create a well-structured and extensible code. Once completed, you can add your ft_printf() to your libft for use in other C projects.

## Contents

- [I. Introduction](#i-introduction)
- [II. Common Instructions](#ii-common-instructions)
- [III. Mandatory Part](#iii-mandatory-part)
- [IV. Submission and Peer-Evaluation](#v-submission-and-peer-evaluation)

## I. Introduction

Discover the intricacies of the printf() function and gain hands-on experience with variadic functions in C. This project provides a moderate challenge to enhance your programming skills.

## II. Common Instructions

- Your project must be written in C.
- Adhere to the Norm guidelines, including bonus files/functions.
- Functions should not quit unexpectedly (e.g., segmentation fault, bus error).
- Properly free all heap-allocated memory to avoid memory leaks.
- Submit a Makefile to compile source files with specific flags.
- Include rules in the Makefile: `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- For bonus submission, add a `bonus` rule to the Makefile.
- Encourage creating test programs for project validation.
- Submit your work to the assigned Git repository.

## III. Mandatory Part

### Program name: libftprintf.a

#### Turn in files
Makefile, *.h, */*.h, *.c, */*.c

#### Makefile rules
`NAME`, `all`, `clean`, `fclean`, `re`

#### External functions
`malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`

#### Libft authorized
Yes

#### Description
Write a library containing `ft_printf()`, a function that mimics the original `printf()`. Recode the `printf()` function from libc with the following requirements:

- Don't implement the buffer management of the original printf().
- Handle the following conversions: `cspdiuxX%`.
- The prototype of `ft_printf()` is: `int ft_printf(const char *, ...)`.

### Additional Requirements

- Use the `ar` command to create your library; `libtool` is forbidden.
- `libftprintf.a` must be created at the root of your repository.

### Conversions to Implement
- `%c`: Prints a single character.
- `%s`: Prints a string (as defined by the common C convention).
- `%p`: The `void *` pointer argument has to be printed in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

## IV. Submission and Peer-Evaluation

Submit your work to the assigned Git repository. Deepthought will grade after peer-evaluations. Check file names and ensure all files are at the root of the repository.
