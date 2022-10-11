#include "main.h"
/**
 * string_toupper - Entry point
 *
 * @s: It's a string!
 *
 * Return: Always 0 (Success)
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 122 && s[i] >= 97)
			s[i] = s[i] - 32;
	}
	return (s);
}
