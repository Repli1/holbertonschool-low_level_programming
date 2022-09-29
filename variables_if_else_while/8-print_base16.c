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
	char c = 48;

	char ch = 'a';

		for (c = 48; c <= 57; c++)
			putchar(c);
		for (ch = 'a'; ch <= 'f'; ch++)
			putchar(ch);
		putchar('\n');
		return (0);
}
