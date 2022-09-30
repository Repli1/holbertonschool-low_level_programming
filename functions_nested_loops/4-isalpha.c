#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: It's a variable!
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}
