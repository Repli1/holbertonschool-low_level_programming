#include "main.h"
/**
 * print_square - Entry point
 *
 * @size: The size of the square, integer.
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int temp = size;

	for (size = 0; size <= temp; size++)
	{
		for (size = 0; size <= temp; size++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
