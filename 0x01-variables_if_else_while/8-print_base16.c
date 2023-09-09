#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: This program prints all the digits of the base 16 in lowercase
 * Return: 0 as success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
