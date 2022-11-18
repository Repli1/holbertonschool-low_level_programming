#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a list.
 * @head: A pointer to the first node of the list.
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
