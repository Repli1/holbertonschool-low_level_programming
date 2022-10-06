#include "main.h"
/**
 * _strlen - Entry point
 *
 * @s: It's a string!
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
