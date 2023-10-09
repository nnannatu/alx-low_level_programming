# C - More malloc, free

## Introduction

This project focuses on advanced memory allocation and management in C, with an emphasis on `malloc`, `free`, `exit`, `calloc`, and `realloc`. By the end of this project, you will have a deeper understanding of these functions and how to use them effectively.

## Table of Contents

1. [Using the exit Function](#using-the-exit-function)
2. [calloc and realloc Functions](#calloc-and-realloc-functions)
3. [Project Requirements](#project-requirements)

## 1. Using the exit Function<a name="using-the-exit-function"></a>

- **How to use the exit function**: The `exit` function in C allows you to terminate a program gracefully and return a specified exit status. It can be useful for handling exceptional conditions or indicating the success or failure of a program.

## 2. calloc and realloc Functions<a name="calloc-and-realloc-functions"></a>

- **calloc and realloc from the standard library**: These functions provide dynamic memory allocation capabilities.
  
  - `calloc`: Allocates memory for an array of elements and initializes them to zero.
  - `realloc`: Changes the size of a previously allocated memory block.

## 3. Project Requirements<a name="project-requirements"></a>

### General

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using `gcc` with specific options.
- Code must follow the Betty style guidelines.
- No global variables allowed.
- Each source file should have no more than 5 functions.
- Only C standard library functions allowed are `malloc`, `free`, and `exit`.
- Prohibited use of functions like `printf`, `puts`, `calloc`, `realloc`, etc.
- You can use `_putchar`, but you don't need to push `_putchar.c`.
- Prototypes for functions and `_putchar` should be included in a header file named `main.h`.

### Project Specifics

- Create a README.md file at the root of the project.
- Header file `main.h` should contain prototypes for functions.
- Follow the specified compilation options.
- Ensure all code files end with a new line.
- Do not publish any project content or engage in plagiarism.

