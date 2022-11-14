#include "lists.h"

/**
 * list_len - Counts the number of elements of a singly linked list.
 * @h: A pointer to a singly linked list.
 * Return: The number of elements of the singly linked list.
 */




size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
