#include "main.h"
/**
 * _sqrt_recursion - Entry point
 *
 * @n: It's an integer!
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
		if (1 + _sqrt_recursion(n - 1) % n != 0)
		{
			return (1 + _sqrt_recursion(n - 1));
		}
		else
			return (n);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
