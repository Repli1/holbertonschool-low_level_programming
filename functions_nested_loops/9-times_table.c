#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int m, n, a = 1, b = 0;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(44);
		for (m = 0; m <= 8; m++)
		{
			_putchar(32);
			if (a * b <= 9)
				_putchar(32);
			else
				_putchar(((a * b) / 10) + '0');
			_putchar(((a * b) % 10) + '0');
			a++;
			if (a == 10)
			{
				a = 1;
				b++;
			}
			else
			_putchar(44);
		}
		_putchar('\n');
	}
}
