#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * @n: It's a variable!
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
	while (n < 98)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	if (n == 98)
		printf("%d", n);
}
