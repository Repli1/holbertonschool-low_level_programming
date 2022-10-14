#include "main.h"
/**
 * _puts_recursion - Entry point
 *
 * @s: It's a string!
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
		return (0);
	else
	{
		_putchar(s[n]);
		return (_puts_recursion[n + 1]);
	}
}
