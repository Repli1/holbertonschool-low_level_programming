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
	int last = n%10;
	_putchar (last + '0');
	return(last);
}
