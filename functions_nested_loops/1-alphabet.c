#include "main.h"
/**
 * main - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
