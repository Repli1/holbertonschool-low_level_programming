#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: Program that prints the following line
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
