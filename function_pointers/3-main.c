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
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *c = argv[2];

	if (argc != 4)
	{
		printf("Error1\n");
		return (98);
	}
	if (get_op_func(c) == NULL)
	{
		printf("Error2\n");
		return (99);
	}
	if ((*c == '%' || *c == '/') && b == 0)
	{
		printf("Error3\n");
		return (100);
	}
	printf("%d\n", get_op_func(c)(a, b));
	return (0);
}
