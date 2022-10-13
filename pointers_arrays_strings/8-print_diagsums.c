#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 *
 * @a: It's an integer!
 *
 * @size: It's another integer!
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i;

	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + *a[i][size - i - 1] + *a[size - i - 1];
	}
	printf("%d", sum);
}
