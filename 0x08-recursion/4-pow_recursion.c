#include "main.h"

/**
 * _pow_recursion - raises the power of x to y
 * @x: the number to be given an exponential value
 * @y: the exponential value
 * Return: an integer value.
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

