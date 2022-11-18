#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint - A function that adds a node as head of a singly linked list.
 * @head: A pointer to a pointer to the head node.
 * @n: Node contents.
 * Return: A pointer to the new head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}

