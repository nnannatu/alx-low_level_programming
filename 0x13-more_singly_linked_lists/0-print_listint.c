#include "lists.h"

/**
 * print_listint - print the elements.
 *
 * @h: the head pointer.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
