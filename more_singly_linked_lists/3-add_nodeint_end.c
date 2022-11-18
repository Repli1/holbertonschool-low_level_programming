#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint_end - A function that adds a node as head of a list.
 * @head: A pointer to a pointer to the head node.
 * @n: Node contents.
 * Return: A pointer to the new head.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (p == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = p;
		p->n = n;
		p->next = NULL;
		return (p);
	}
	p = *head;
	while (p->next)
		p = p->next;
	p->next = malloc(sizeof(listint_t));
	p = p->next;
	p->n = n;
	p->next = NULL;
	return (p);
}

