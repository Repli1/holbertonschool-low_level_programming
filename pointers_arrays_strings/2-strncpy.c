#include "main.h"
/**
 * _strncpy - Entry point
 *
 * @src: It's a string!
 *
 * @dest: It's another string!
 *
 * @n: It's an integer!
 *
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int len = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i != n; i++)
		dest[i] = src[i];

	for (; i != len; i++)
		dest[i] = '\0';

	return (dest);
}
