#include "lists.h"

/**
 * listint_len - print the elements.
 *
 * @h: the head pointer.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *new = NULL;
	size_t num = 0;

	new = h;
	if (h == NULL)
		printf("Error\n");
	while (new != NULL)
	{
		num++;
		new = new->next;
	}
	return (num);
}
