#include "main.h"
/**
 * puts2 - Entry point
 *
 * @str: It's a string!
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int n;

	int len = 0;

	while (str[len] != '\0')
		len++;

	for (n = 0; str[2 * n] != '\0' && str[(2 * n) + 1] != '\0'; n++)
		_putchar(str[2 * n]);
	if (len % 2 == 1)
		_putchar(str[len - 1]);
	_putchar('\n');
}
