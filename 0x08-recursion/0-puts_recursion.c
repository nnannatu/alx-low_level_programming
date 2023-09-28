#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - fucntion to print string recursively
 * main - Prints a string
 * @s: Pointer to the strings
 * Return;
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	printf("%c", *s);
	_puts_recursion(s + 1);
}

