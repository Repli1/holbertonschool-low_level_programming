#include "main.h"
/**
 *  _islower - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: 1 or 0 (Success)
 */

int _islower(int c)
{
	if ('a' <= c <= 'z')
		return (1);
	else
		return (0);
}
