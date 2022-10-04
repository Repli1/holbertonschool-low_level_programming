#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * @n: It's an integer!
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int m;

	if (n > 0)
	{
		for (; n > 0; n--)
		{
			for (m = 0; m <= n; m++)
				_putchar(' ');
			_putchar(95);
			_putchar("\n");
		}
	}
}
