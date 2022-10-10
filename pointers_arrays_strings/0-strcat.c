#include "main.h"
/**
 * _strcat - Entry point
 *
 * @src: It's a string!
 *
 * @dest: It's another string!
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int n;

	int len1 = 0;

	int len2 = 0;

	while (dest[len1] != '\0')
		len1++;

	while (src[len2] != '\0')
		len2++;

	for (n = 0; src[n] != '\0' ; n++)
	{
		dest[len1 + n] = src[n];
	}
	return (dest);
}
