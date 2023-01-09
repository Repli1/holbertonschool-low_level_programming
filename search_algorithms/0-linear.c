#include "search_algos.h"

/**
 * linear_search - Searches a value in an array.
 * @array: The array to be searched in.
 * @size: The size of the array.
 * @value: The value to search for.
 * Return: The index to the first instance of the value if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
