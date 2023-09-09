#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: This program prints the single digits in base 10 using their ASCII codes
 * Return: 0 as succesful
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
