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
	int n, a, i, j;

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
			int n = argv[i][j] + '\0';

			size_t a = sizeof(argv[i]);

			int a = a - 2 - j;

			for (; a >= 0; a--)
				int n = n * 10;

			int b = b + n;
		}
		if (i == 1)
			int result = b;
		else
			int result = result * b;
		int b = 0;
	}
	return (0);
}
