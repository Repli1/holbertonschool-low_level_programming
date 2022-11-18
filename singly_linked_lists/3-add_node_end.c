#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - A function that adds a node as head of a singly linked list.
 * @head: A pointer to a pointer to the head node.
 * @str: Node contents.
 * Return: A pointer to the new head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	if (s == NULL)
	{
		free(p);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = p;
		p->str = s;
		p->len = strlen(s);
		p->next = NULL;
		return (p);
	}
	p = *head;
	while (p->next)
		p = p->next;
	p->next = malloc(sizeof(list_t));
	p = p->next;
	p->str = s;
	p->len = strlen(s);
	p->next = NULL;
	return (p);
}

