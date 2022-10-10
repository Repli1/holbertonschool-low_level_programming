#include <stdio.h>
#include "main.h"
/**
 * print_array - Entry point
 *
 * @a: It's an array!
 *
 * @n: It's an integer!
 *
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m == n; m++)
	{
		printf("%d", a[m]);
		_putchar(',');
		_putchar(' ');
	}
}
