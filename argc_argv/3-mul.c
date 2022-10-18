#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * @argc: Argument count.
 *
 * @argv: Argument array.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, a, i, j, result;

	int b = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			n = argv[i][j] + '\0';

			a = sizeof(argv[i]);

			a = a - 2 - j;

			for (; a >= 0; a--)
				n = n * 10;

			b = b + n;
		}
		if (i == 1)
			result = b;
		else
			result = result * b;
		b = 0;
	}
	printf("%d\n", result);
	return (0);
}
