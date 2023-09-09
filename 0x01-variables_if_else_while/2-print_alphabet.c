#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * Description: this code prints alphabets in lowercase
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

	putchar('\n');
	return (0);
}
