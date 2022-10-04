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

	int m = size;

	for (size = 0; size < temp; size++)
	{
		for (m = 0; m < temp; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
