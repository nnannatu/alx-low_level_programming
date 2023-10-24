#include "lists.h"

/**
 * add_nodeint - print the elements.
 * @head: the head pointer to pointer
 * @n: the new node element.
 * Return: new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;
	*head = new;
	if (*head == NULL)
		return (NULL);
	else
		return (new);
}
