#include "main.h"
/**
 * _strchr - Entry point
 *
 * @s: It's a string!
 *
 * @c: It's a character!
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (s[-1] == c)
		return (&s[-1]);
	return (NULL);
}
