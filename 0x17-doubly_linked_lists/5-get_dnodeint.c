#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position;

	position = 0;

	if (head == NULL)
		return (NULL);

	while (position != index && index > 0)
	{
		head = head->next;
		position++;
	}
	return (head);
}
