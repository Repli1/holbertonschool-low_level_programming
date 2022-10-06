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
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		s++;
	}
	return (len);
}
