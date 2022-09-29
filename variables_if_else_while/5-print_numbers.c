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
	char n = 0;

	while (n < 10)
	{
		putchar(n);
		n += 1;
	}
	putchar('\n');
	return (0);
}
