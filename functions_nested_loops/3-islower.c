#include "main.h"
/**
 *  _islower - Entry point
 *
 * @c: i'ts the variable!
 *
 * Return: 1 or 0 (Success)
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
