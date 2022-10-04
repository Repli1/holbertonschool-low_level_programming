#include "main.h"
/**
 * print_line - Entry point
 *
 * @n: It's an integer!
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	if (n >= 0)
	{
		for (; n >= 0; n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
