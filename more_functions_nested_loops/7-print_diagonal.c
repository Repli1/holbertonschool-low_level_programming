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
	int temp = n;

	int m = n;

	if (n > 0)
	{
		for (n = 0; n < temp; n++)
		{
			for (n = 0; n < m; n++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
