#include "lists.h"
#include <stdio.h>
/**
 * listint_len - A function counts the number of nodes in a list.
 * @h: A pointer to the first node of the list.
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
