#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 *
 * @s1: It's a string!
 *
 * @s2: It's another string!
 *
 * @n: It's an unsigned int!
 *
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = malloc(sizeof(s1) + n);

	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > sizeof(s2))
		n = sizeof(s2);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	return (str);
}
