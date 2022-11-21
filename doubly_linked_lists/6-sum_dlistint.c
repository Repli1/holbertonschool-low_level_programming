#include "lists.h"

/**
 * sum_dlistint - A function that sums the n elemens of a list.
 * @head: The first node of the list.
 * Return: The sum of all the n elemens of the list.
 */

int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;
	dlistint_t *p = head;

	if (head == NULL)
		return (0);
	for (i = 0; p->next; i++)
	{
		sum = sum + p->n;
		p = p->next;
	}
	sum = sum + p->n;
	return (sum);
}
