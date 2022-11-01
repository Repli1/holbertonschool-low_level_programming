#include "3-calc.h"

/**
 * get_op_func - Entry point
 *
 * @s: A pointer to the operator.
 *
 * Return: The function with the corrseponding operation or NULL if no match.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
