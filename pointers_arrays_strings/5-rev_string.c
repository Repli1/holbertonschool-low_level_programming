#include "main.h"
/**
 * rev_string - Entry point
 *
 * @s: It's a string!
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int m, n;

	int len = 0;

	while (s[len] != '\0')
		len++;

	for (m = 0; m < len / 2; m++)
	{
		n = s[m];
		s[m] = s[len - m];
		s[len] = n;
	}
}
