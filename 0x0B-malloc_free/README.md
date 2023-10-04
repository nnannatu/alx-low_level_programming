# Dynamic Memory Allocation in C: malloc and free

## Introduction

This README provides a quick overview of dynamic memory allocation in C using `malloc` and `free`.

## What is malloc and free?

- **malloc**: It's a C library function used to allocate memory on the heap during runtime.
  
  Example:
  ```c
  int *arr = (int *)malloc(5 * sizeof(int)); // Allocates memory for an integer array of size 5
