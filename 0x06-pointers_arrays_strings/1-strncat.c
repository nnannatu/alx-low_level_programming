#include "main.h"

/**
 * _strncat - concatenates n strings from the source string
 *
 * @n: the n strings
 * @dest: the destination string
 * @src: the source string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int o = 0, p = 0;

	while (dest[o] != '\0')
	{
		o++;
	}
	while (p < n && src[p] != '\0')
	{
		dest[o] = src[p];
		o++;
		p++;
	}
	dest[o] = '\0';
	return (dest);
}
