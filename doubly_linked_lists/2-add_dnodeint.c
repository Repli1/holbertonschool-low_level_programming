#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_dnodeint - A function that adds a node as head of a doubly linked list.
 * @head: A pointer to a pointer to the head node.
 * @n: Node contents.
 * Return: A pointer to the new head.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p = malloc(sizeof(dlistint_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->n = n;
	p->next = *head;
	if (*head)
		(*head)->prev = p;
	*head = p;
	return (p);
}

