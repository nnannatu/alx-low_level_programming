#include <stdio.h>

/**
 * main - Entry point to the program
 * Description: This code prints the alphabets in lowercase, then uppercase
 * Return: 0 as successful
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
