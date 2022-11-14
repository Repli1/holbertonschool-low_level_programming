#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints a singly linked list.
 * @h: The first node of the list.
 * Return: The number of nodes of the list.
 */



size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}

