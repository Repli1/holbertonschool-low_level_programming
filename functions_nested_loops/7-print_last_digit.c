#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar ((-n)%10 + '0');
		return ((-n)%10);
	}
	else
	{
		_putchar (n%10 + '0');
		return (n%10);
	}
}
