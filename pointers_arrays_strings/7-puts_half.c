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
	for (n = 0; n + len/2 != '\0'; n++)
		_putchar(n + len/2);
}
