#include "main.h"
/**
 * print_triangle - Entry point
 *
 * @size: The size of the triangle, integer.
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int temp = size;

	int n = size;

	if (size > 0)
	{
		for (size = 0; size < temp; size++)
		{
			for (n = 0; n < (temp - size); n++)
				_putchar(' ');
			for (n = 0; n < size; n++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
