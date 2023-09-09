#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: This program prints all the possible combination of single digit numbers
 * Return: 0 as successful
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
