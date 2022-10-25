#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 *
 * @size: It's an unsigned int!
 *
 * @c: It's a character!
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *) malloc(size * sizeof(char));

	unsigned int i;

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
