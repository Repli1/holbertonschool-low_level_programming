#include "main.h"
/**
 * reverse_array - Entry point
 *
 * @a: It's an array!
 *
 * @n: It's another integer!
 *
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i;

	int m;

	for (i = 0; i != (n / 2); i++)
	{
		m = a[i];
		a[i] = a[n - i];
		a[n - i] = m;
	}
}
