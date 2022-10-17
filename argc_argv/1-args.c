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
int main(int argc, __attribute__((unused)) char *argv[])
{
	int n = argc - 1;

	printf("%d\n", n);
	return (0);
}
