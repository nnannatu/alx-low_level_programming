# Singly Linked Lists

This project is part of the ALX Software Engineering program and focuses on implementing various operations on singly linked lists using the C programming language. Singly linked lists are a fundamental data structure used to manage collections of data. In this project, we will be working with a specific data structure, `listint_t`, which represents a singly linked list node with an integer value and a reference to the next node in the list.

## Table of Contents

- [Project Overview](#project-overview)
- [File Descriptions](#file-descriptions)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Usage](#usage)
- [Tasks](#tasks)
- [Contributors](#contributors)

## Project Overview

The primary goal of this project is to understand and implement various operations on singly linked lists. These operations include:

1. Printing the elements of a list.
2. Finding the number of elements in a list.
3. Adding a new node at the beginning of a list.
4. Adding a new node at the end of a list.
5. Freeing a list.
6. Freeing a list and setting the head to NULL.
7. Deleting the head node of a list.
8. Returning the nth node of a list.
9. Finding the sum of all elements in a list.
10. Inserting a new node at a specified index.
11. Deleting a node at a specified index.
12. Reversing a list.

The code is written in C and follows specific requirements to ensure code quality and readability.

## File Descriptions

- `0-print_listint.c`: Contains a function that prints all the elements of a `listint_t` list.

- `1-listint_len.c`: Includes a function that returns the number of elements in a `listint_t` list.

- `2-add_nodeint.c`: Implements a function that adds a new node at the beginning of a `listint_t` list.

- `3-add_nodeint_end.c`: Contains a function that adds a new node at the end of a `listint_t` list.

- `4-free_listint.c`: Implements a function that frees a `listint_t` list.

- `5-free_listint2.c`: Includes a function that frees a `listint_t` list and sets the head to NULL.

- `6-pop_listint.c`: Contains a function that deletes the head node of a `listint_t` list.

- `7-get_nodeint.c`: Implements a function that returns the nth node of a `listint_t` list.

- `8-sum_listint.c`: Contains a function that returns the sum of all the data in a `listint_t` list.

- `9-insert_nodeint.c`: Implements a function that inserts a new node at a specified index in a `listint_t` list.

- `10-delete_nodeint.c`: Contains a function that deletes a node at a specified index in a `listint_t` list.

- `100-reverse_listint.c`: Implements a function that reverses a `listint_t` list using only one loop and a limited number of variables.

- `101-print_listint_safe.c`: Includes a safe version of the print function that goes through the list only once.

- `lists.h`: Header file containing function prototypes and the definition of the `listint_t` structure.

- `adv_print_listint_safe.c`: An advanced version of the print function for safe printing.

## Requirements

- All code is written in C and follows the C standard library functions.
- Code is compiled on Ubuntu 20.04 LTS using `gcc` with specific options: -Wall -Werror -Wextra -pedantic -std=gnu89.
- The code adheres to the Betty style for code formatting.
- The use of global variables is not allowed.
- Each C file should have no more than 5 functions.
- The only allowed C standard library functions are `malloc`, `free`, and `exit`. No other functions like `printf`, `puts`, `calloc`, `realloc`, etc., are allowed.
- The header file `lists.h` contains function prototypes and is include-guarded.
- The `print_listint` function must exit with status 98 if it fails.

## Compilation

To compile the code, use the `gcc` compiler with the provided options and specify the source files. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_listint.c -o 0-print

