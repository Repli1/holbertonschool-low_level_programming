#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Function that transforms a binary number to base 10.
 * @b: A pointer to the binary number to transform.
 * Return: The binary number in base 10 or 0 if failed.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len = 0, m = 0, n;
	char *c;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	c = malloc(sizeof(char) * len);
	for (i = 0; i < len; i++)
		c[i] = b[len - i - 1];
	c[len] = '\0';
	for (i = 0; c[i] != '\0'; i++)
	{
		if (!(c[i] == '0' || c[i] == '1'))
			return (0);
		n = c[i] - '0';
		for (j = 0; j < i; j++)
			n = n * 2;
		m = n + m;
	}
	return (m);
}
