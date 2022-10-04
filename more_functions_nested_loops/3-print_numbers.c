#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Description: A program that prints the following line.
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
