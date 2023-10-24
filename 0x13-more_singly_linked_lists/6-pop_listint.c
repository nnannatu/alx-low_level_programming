#include "lists.h"

/**
 * pop_listint - function to free head node..
 * @head: the pointer to the first node.
 * Return: *head->n.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;

	if (!head || !*head)
		return (0);
	
	*head = ptr->next;
	free(ptr);
	ptr = *head;

	return ((*head)->n);
}
