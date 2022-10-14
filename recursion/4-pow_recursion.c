#include "main.h"
/**
 * _pow_recursion - Entry point
 *
 * @x: It's an integer!
 *
 * @y: It's another integer!
 *
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
