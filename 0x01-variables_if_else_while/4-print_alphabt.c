#include <stdio.h>

/**
 * main - Entry point
 * Description: This code prints lowercase alphabets without q and e
 * Return: 0 as successful
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}
