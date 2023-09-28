#include "main.h"

/**
 * _strlen_recursion - returns the string lenght.
 * @s: Pointer to the string address.
 * Return: o;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return 1 + _strlen_recursion(s + 1);
}
