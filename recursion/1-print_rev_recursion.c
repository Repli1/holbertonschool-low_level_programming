#include "main.h"
/**
 * _print_rev_recursion - Entry point
 *
 * @s: It's a string!
 *
 * Return: Always 0 (Success)
 **/
int _length(char *s)
{
	if (s[0] != '\0')
		return (1 + _length(s + 1));
	else
		return (1);
}

void _print_rev_recursion(char *s)
{
	_putchar(_length(s) + '0');
}
