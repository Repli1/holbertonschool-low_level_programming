#include "lists.h"
#include <stdio.h>
/**
 * print_listint - A function that prints a list.
 * @h: A pointer to the first node of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
