#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - A function that frees a list.
 * @head: A pointer to the first node of the list.
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
