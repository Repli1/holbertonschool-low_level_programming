#include "main.h"
/**
 * _memcpy - Entry point
 *
 * @src: It's a string!
 *
 * @dest: It's another string!
 *
 * @n: It's an unsigned integer!
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
