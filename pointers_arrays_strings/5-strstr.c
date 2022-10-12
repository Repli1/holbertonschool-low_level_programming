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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				n++;
		}
		if (n == (j + 1))
			return (&haystack[i]);
		n = 0;
	}
	return ('\0');
}
