#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Entry point
 *
 * @nmemb: It's an unsigned int!
 *
 * @size: It's another unsigned int!
 *
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		array[i] = 0;

	return (array);
}
