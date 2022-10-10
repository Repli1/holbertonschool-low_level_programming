#include "main.h"
/**
 * puts_half - Entry point
 *
 * @str: It's a string!
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int n;

	int len = 0;

	while (str[len] != '\0')
		len++;

	for (n = 0; str[len/2 + n] != '\0' && str[len/2 + n - 1] != '\0'; n++)
		_putchar(str[n + len/2]);

	_putchar('\n');
}
