#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: It's a number!
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar (((-n) % 10) + '0');
		return ((-n) % 10);
	}
	else
	{
		_putchar ((n % 10) + '0');
		return (n % 10);
	}
}
