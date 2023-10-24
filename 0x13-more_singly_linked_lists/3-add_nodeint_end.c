#include "lists.h"

/**
 * add_nodeint_end - added node at the end.
 * @n: new element data.
 * @head: points to the first node.
 * Return: new
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	new->n = n;
	new->next = NULL;
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
