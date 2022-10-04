#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: A program that prints the following line.
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
		if ((c != 50) && (c != 52))
			_putchar(c);
	_putchar('\n');
}
