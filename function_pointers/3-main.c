#include "3-calc.h"
/**
 * main - Entry point
 *
 * @argc: Number of arguments
 *
 * @argv: Arguements
 *
 * Return: 0 on success, 98-100 otherwise.
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];
	if (get_op_func(c) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*c == '%' || *c == '/') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(c)(a, b));
	return (0);
}
