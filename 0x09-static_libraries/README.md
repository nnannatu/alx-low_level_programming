# C - Static Libraries

## Introduction

This project focuses on creating and using static libraries in C. Static libraries are collections of precompiled code for reuse.

## Static Libraries

- **What**: Containers of precompiled code.
- **How**: Combine object files at compile-time.
- **Why**: Organize and distribute reusable code efficiently.

## Creating a Static Library

1. Compile code into object files.
2. Create the library with `ar`.
3. Example: `ar rcs libmylibrary.a my_function.o`.

## Using a Static Library

1. Include the library in the compilation command.
2. Example: `gcc -o my_program my_program.c -L. -lmylibrary`.
3. Execute your program: `./my_program`.

## Project Requirements

- C Programming: Follow specific coding guidelines.
- Bash Scripts: Provide scripts with descriptions in a `README.md`.

