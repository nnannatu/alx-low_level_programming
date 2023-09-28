#include "main.h"


/**
 * _sqrt_recursion - prints natural square root of numbers.
 * @n: the square root.
 * Return: integer value.
 */

int _sqrt_recursion(int n)
{
	int guess = n / 2;
	int square = guess * guess;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (square == n)
	{
		return (guess);
	}
	else if (square < n)
	{
		return (_sqrt_recursion(n - square) + guess);
	}

	else
	{
		return (_sqrt_recursion(n));
	}
}
