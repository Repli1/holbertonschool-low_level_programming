#include "main.h"
/**
 * _memset - Entry point
 *
 * @s: It's a string!
 *
 * @b: It's a character!
 *
 * @n: It's an integer!
 *
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
