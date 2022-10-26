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
	char *dup;

	int i;

	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= (len + 1); i++)
		dup[i] = str[i];

	return (dup);
}
