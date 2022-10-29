#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * @name: A name.
 *
 * @f: A pointer to a function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
