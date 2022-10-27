#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 *
 * @min: It's an integer!
 *
 * @max: It's another integer!
 *
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int i;

	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		array[i] = min + i;

	return (array);
}
