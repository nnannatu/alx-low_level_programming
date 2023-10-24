#include "lists.h"

/**
 * print_listint - print the elements.
 *
 * @h: the head pointer.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *new = NULL;
	size_t num = 0;

	new = h;
	if (h == NULL)
		return (1);
	while (new != NULL)
	{
		num++;
		printf("%d\n", new->n);
		new = new->next;
	}
	return (num);
}
