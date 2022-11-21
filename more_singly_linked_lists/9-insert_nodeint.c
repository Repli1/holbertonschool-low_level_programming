#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Creates a new node at the index given.
 * @head: The first node of the list.
 * @idx: The index to insert the node at.
 * @n: The node's contents.
 * Return: The direction of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		if (i != idx - 1)
		{
			if (p->next)
				p = p->next;
			else
				return (NULL);
		}
	}
	if (p->next == NULL)
		return (NULL);
	new->next = p->next;
	p->next = new;
	p = p->next;
	p = p->next;
	new->next = p;
	return (new);
}
