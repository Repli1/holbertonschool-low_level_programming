#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the node at index.
 * @head: A pointer to the first node of the list.
 * @index: The index of the node to return.
 * Return: The node at the index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (p->next)
			p = p->next;
		else
			return (NULL);
	}
	return (p);
}
