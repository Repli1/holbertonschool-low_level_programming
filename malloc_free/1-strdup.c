#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Entry point
 *
 * @str: It's a string!
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *dup = malloc(sizeof(str));

	long unsigned int i;

	if (str == NULL || dup == NULL)
		return (NULL);

	for (i = 0; i < sizeof(str); i++)
		dup[i] = str[i];

	return (dup);
}
