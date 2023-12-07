Project: C - Doubly Linked Lists

## Description
This project focuses on understanding and implementing doubly linked lists in C. The goal is to grasp the concept of doubly linked lists, learn how to use them, and implement various operations such as deletion and insertion. It's crucial to seek the right sources of information and demonstrate the ability to work with doubly linked lists independently.

## Project Details
- Start Date: December 7, 2023, 6:00 AM
- End Date: December 8, 2023, 6:00 AM
- Checker Release: December 7, 2023, 12:00 PM
- Auto Review at Deadline

## Learning Objectives
By the end of this project, you should be able to:
1. Understand what a doubly linked list is.
2. Use doubly linked lists effectively.
3. Implement various operations (deletion, insertion, etc.) with doubly linked lists.
4. Start looking for the right sources of information independently.

## Requirements
- Editors Allowed: vi, vim, emacs
- Compilation Environment: Ubuntu 20.04 LTS using Python3 (version 3.8.5)
- File Endings: All files should end with a new line
- Coding Style: Follow the Betty style using betty-style.pl and betty-doc.pl
- Global Variables: Not allowed
- Functions per File: No more than 5 functions per file
- Standard Library Functions: Only malloc, free, printf, and exit are allowed
- Main Files: Provided main.c files are for testing purposes; your repo doesn't need to include them.
- Header File: Include a header file named lists.h with prototypes for all your functions.
- Header File Guard: All header files should have include guards.

## Data Structure
Use the following structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

