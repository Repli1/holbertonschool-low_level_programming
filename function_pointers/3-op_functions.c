#include "3-calc.h"

/**
 * op_add - A sum
 *
 * @a: First addend.
 *
 * @b: Second addend.
 *
 * Return: The sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A substraction
 *
 * @a: First operator.
 *
 * @b: Second operator.
 *
 * Return: The substraction.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A multiplication
 *
 * @a: First operator.
 *
 * @b: Second operator.
 *
 * Return: The multiplication.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A division.
 *
 * @a: Dividend.
 *
 * @b: Divisor.
 *
 * Return: The division.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - A modulo operation.
 *
 * @a: First operator.
 *
 * @b: Second operator.
 *
 * Return: The result.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
