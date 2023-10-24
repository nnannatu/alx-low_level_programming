#include "lists.h"

/**
 * free_listint2 - function to free list.
 * @head: the pointer to the first node.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while (*head)
	{
		*head = ptr->next;
		free(ptr);
		ptr = *head;
	}
	*head = NULL;
}
