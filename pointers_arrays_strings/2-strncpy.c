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

	for (i = 0; (i < n) && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
