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
	int *array = malloc(size * nmemb);

	if (nmemb == 0 || size == 0 || array == NULL)
		return (NULL);
	return (array);
}
