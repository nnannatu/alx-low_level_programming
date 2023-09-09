#include <stdio.h>

/**
 * main - Entrry point of the program
 * Description: This program prints the lowercase alphabets in reverse
 * Return: 0 as successful
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
