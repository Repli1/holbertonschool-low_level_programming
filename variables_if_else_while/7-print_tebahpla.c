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

		for (c = 'z'; c >= 'a'; c--)
			putchar(c);
		putchar('\n');
		return (0);
}
