#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * @array: The array to be searched.
 *
 * @size: The size of the array.
 *
 * @cmp: A function.
 *
 * Return: The index of the matching element or -1 if not found / size negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
