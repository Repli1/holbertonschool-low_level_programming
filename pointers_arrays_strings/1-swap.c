#include "main.h"
/**
 * swap_int - Entry point
 *
 * @a: It's an integer!
 *
 * @b: It's another integer!
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
