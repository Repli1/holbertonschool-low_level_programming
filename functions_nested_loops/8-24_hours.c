#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int n = 0;

	char a = 48;

	char b = 48;

	char c = 48;

	char d = 48;

	for (n = 0; n <= 1439; n++)
	{
		_putchar(a);
		_putchar(b);
		_putchar(58);
		_putchar(c);
		_putchar(d);
		_putchar('\n');
		d++;
		if (d == 58)
		{
			c++;
			d = 48;
		}
		if (c == 54)
		{
			b++;
			c = 48;
		}
		if (b == 58)
		{
			a++;
			b = 48;
		}
	}
}
