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
	_putchar (_abs(n%10) + '0');
	return(_abs(n%10));
}
