#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a list and sets its head to NULL.
 * @head: A pointer to the first node of the list.
 */

void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2(&((*head)->next));
		free((*head));
	}
	*head = NULL;
}
