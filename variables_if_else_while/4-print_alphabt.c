#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program that prints the following line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' || c != 'e')
			putchar(c);
	return (0);
}
