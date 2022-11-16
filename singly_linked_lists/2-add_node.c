#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - A function that adds a node as head of a singly linked list.
 * @head: A pointer to a pointer to the head node.
 * @str: Node contents.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL || s == NULL)
		free(p);
	if (p == NULL)
		return (NULL);
	p->str = s;
	p->len = strlen(s);
	p->next = *head;
	*head = p;

	return (p);
}

