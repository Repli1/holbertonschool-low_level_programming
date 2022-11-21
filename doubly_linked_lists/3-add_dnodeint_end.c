#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - A function that adds a node as head of a list.
 * @head: A pointer to a pointer to the head node.
 * @n: Node contents.
 * Return: A pointer to the new head.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p = malloc(sizeof(dlistint_t)), *c;

	if (p == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = p;
		p->n = n;
		p->next = NULL;
		p->prev = NULL;
		return (p);
	}
	p = *head;
	while (p->next)
		p = p->next;
	p->next = malloc(sizeof(dlistint_t));
	c = p;
	p = p->next;
	p->n = n;
	p->next = NULL;
	p->prev = c;
	return (p);
}

