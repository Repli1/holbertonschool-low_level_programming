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
	if (size == 0)
		return (NULL);

	char* array = (char*) malloc(size * sizeof(char));

	unsigned int i;

	for (i = 0; i < size; i++)
		array[i] = c;
	return (&array);
}
