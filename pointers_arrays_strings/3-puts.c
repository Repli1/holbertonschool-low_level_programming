#include "main.h"
/**
 * _puts - Entry point
 *
 * @str: It's a string!
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int n;

	for (n = 0; n < *str['\0']; n++)
		_putchar(str[n]);
	_putchar('\n');
}
