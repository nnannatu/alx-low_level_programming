#include "main.h"
/**
 * main - print_alphabet_x10
 * Description: print_alphabet_x10 - prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
		_putchar (la);
		_putchar ('\n');
	}
}
