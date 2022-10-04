#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that prints the following line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
			printf("Fizz");
		if ((n % 5) == 0)
			printf("Buzz");
		if (!(((n % 3) == 0) || ((n % 5) == 0)))
			printf("%d", n);
		if (n < 100)
			printf("%c", ' ');
	}
	printf("%c", '\n');
	return (0);
}
