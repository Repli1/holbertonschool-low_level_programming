#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 *
 * @b: It's an unsigned int!
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);
	if (mem == NULL)
		return (NULL);
	return (mem);
}
