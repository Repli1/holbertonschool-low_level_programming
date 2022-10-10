#include "main.h"
/**
 * _strncat - Entry point
 *
 * @dest: It's a string!
 *
 * @src: It's another string!
 *
 * @n: It's an integer!
 *
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int len1 = 0;

	while (dest[len1] != '\0')
		len1++;

	for (i = 0; src[i] != '\0' && (i < n) ; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
