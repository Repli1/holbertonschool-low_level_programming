#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: Always 0 (Success)
 */

int _islower(int c);
{
	if (97 <= c <= 122)
		return (1);
	else 
		return (0);
}
