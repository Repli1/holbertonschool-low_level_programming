#include "main.h"
/**
 * print_rev - Entry point
 *
 * @s: It's a string!
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int n = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		_putchar(s[-(n+1)] + '0');
	}

	_putchar('\n');
}
