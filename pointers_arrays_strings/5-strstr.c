#include "main.h"
/**
 * _strstr - Entry point
 *
 * @haystack: It's a string!
 *
 * @needle: It's another string!
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				n++;
		}
		if (n == j + 1)
			return (&s[i]);
		n = 0;
	}
	return ('\0');
}
