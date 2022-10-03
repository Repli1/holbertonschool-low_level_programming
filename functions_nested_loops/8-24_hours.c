#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	char a = 47;

	char b = 47;

	char c = 47;

	char d = 47;

	for(n = 0, n <= 1440, n++)
	{
		_putchar(a);
		_putchar(b);
		_putchar(58);
		_putchar(c);
		_putchar(d);
		d++;
		if d == 58
			d = 47;
	}
}
