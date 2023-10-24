#include "lists.h"

/**
 * sum_listint - function to sum node data.
 * @head: the pointer to the first node.
 * Return: num.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
