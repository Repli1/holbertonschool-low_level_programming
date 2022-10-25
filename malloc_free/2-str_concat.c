#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 *
 * @s1: It's a string!
 *
 * @s2: It's another string!
 *
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	char *str = malloc(sizeof(*s1) + sizeof(*s2));

	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		str[j + i] = s2[j];
	return (str);
}
