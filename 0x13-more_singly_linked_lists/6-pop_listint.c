#include "lists.h"

/**
 * pop_listint - function to free head node..
 * @head: the pointer to the first node.
 * Return: *head->n.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int num = 0;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	*head = ptr->next;
	free(ptr);
	ptr = *head;

	return (num);
}
