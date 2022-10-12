#include "main.h"
/**
 * _strspn - Entry point
 *
 * @s: It's a string!
 *
 * @accept: It's another string!
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int n = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\n' && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				n++;
		}
	}
	return (n);
}
