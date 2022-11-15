#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	list_t *p = malloc(sizeof(list_t));

	p->str = s;
	p->len = strlen(s);
	p->next = *head;
	*head = p;
	
	return (p);
}

