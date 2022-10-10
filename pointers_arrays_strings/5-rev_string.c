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
	int n;

	int len = 0;

	while (s[len] != '\0')
		len++;

	char arr[];

	for (n = len; s[n] != s[0]; n--)
		arr[len - n] = s[n];

	*s = arr[len];
}
