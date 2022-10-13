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

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - i - 1];
	}
	printf("%d", sum1);
	printf("%s", ", ");
	printf("%d", sum2);
	for (i = 0; i < (size + 7); i++)
	{
		printf("%d", a[i]);
		printf("%c", ' ');
	}
}
