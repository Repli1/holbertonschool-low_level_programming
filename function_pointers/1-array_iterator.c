#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * @array: The array to be iterated.
 *
 * @size: The size of the array.
 *
 * @action: A function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array != NULL) && (action != NULL))
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
