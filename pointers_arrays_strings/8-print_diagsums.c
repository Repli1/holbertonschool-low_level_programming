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

	int sum1 = 0;

	int sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		sum1 = sum1 + a[i + size * i];
		sum2 = sum2 + a[size * i - i];
	}
	printf("%d", sum1);
	printf("%s", ", ");
	printf("%d", sum2);
}
