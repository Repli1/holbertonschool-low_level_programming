#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the first node of a list.
 * @head: A pointer to a pointer to the first node of the list.
 * Return: The contents of the new head.
 */

int pop_listint(listint_t **head)
{
	listint_t *p = malloc(sizeof(listint_t));
	int i;

	if (p == NULL)
	{
		free(p);
		return (0);
	}
	if (head == NULL)
		return (0);
	p = *head;
	i = p->n;
	*head = p->next;
	p->next = NULL;
	return (i);
}
