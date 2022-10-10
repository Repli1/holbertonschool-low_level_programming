#include "main.h"
/**
 * _strcpy - Entry point
 *
 * @dest: It's a string!
 *
 * @src: It's another string!
 *
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] <= '\0'; n++)
	{
		dest[n] = src[n];
	}
	return (char *dest);
}
