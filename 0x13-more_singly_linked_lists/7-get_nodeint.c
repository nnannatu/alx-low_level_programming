#include "lists.h"

/**
 * get_nodeint_at_index - function to get node index.
 * @head: the pointer to the first node.
 * @index: number of nodes
 * Return: index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int n = 0;

	if (!head)
		return (0);
	while (ptr && n < index)
	{
		n++;
		ptr = ptr->next;
	}

	return (ptr);
}
