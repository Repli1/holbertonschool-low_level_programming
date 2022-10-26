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
	char *str;

	unsigned int i, j;

	unsigned int len1 = 0;

	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	str = malloc(len1 + n + 1);

	if (str == NULL)
		return (NULL);

	if (n > (len2 + 1))
		n = len2 + 1;

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[i + j] = s2[j];

	return (str);
}
