#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Description: A program that prints the following line.
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	char c = 48;

	int n, m;

	for (m = 0; m <= 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar(49);
			_putchar(c);
			c++;
			if (c == 58)
				c = 48;
		}
		c = 48;
		_putchar('\n');
	}
}
