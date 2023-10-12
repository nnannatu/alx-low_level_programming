# Project 0x10 - C Variadic Functions

## Learning Objectives

- Understand what variadic functions are and how to use them.
- Learn to use the `va_start`, `va_arg`, and `va_end` macros for working with variadic functions.
- Explore the purpose and usage of the `const` type qualifier in C.

## Requirements

- **General**:
  - Allowed Editors: vi, vim, emacs
  - Compilation: Ubuntu 20.04 LTS, `gcc` with `-Wall -Werror -Wextra -pedantic -std=gnu89` options.
  - All files should end with a new line.
  - A mandatory `README.md` file at the root of the project folder.
  - Code should adhere to the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`.
  - Avoid global variables.
  - Limit files to no more than 5 functions per file.
  - Use only specific C standard library functions (e.g., `malloc`, `free`, `exit`). Avoid using functions like `printf`, `puts`, `calloc`, and `realloc`.
  - Allowed macros include `va_start`, `va_arg`, and `va_end`.
  - You can use `_putchar`. (You don't need to push `_putchar.c`).
  - Prototypes for functions and the `_putchar` function should be included in the `variadic_functions.h` header file.
  - Don't forget to push your header file.
  - Include guards in all your header files to prevent multiple inclusions.

## Project Tasks

This project will involve working with variadic functions and understanding their usage. You'll need to complete the tasks to meet the project's learning objectives.

## Compilation

To compile your code, use the provided `gcc` command with the specified options. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 your_file.c -o your_program

