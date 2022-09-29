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
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
