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
	return (&s[-1] - &s[0]);
}
