#include "main.h"
/**
 * _abs - Entry point
 *
 * @n: Variable
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (-n);
}
