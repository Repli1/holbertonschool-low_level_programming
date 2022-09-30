#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c;

	int a = 0;

	while (a++ <= 9)
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	_putchar('\n');
}
