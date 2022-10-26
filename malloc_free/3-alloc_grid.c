#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 *
 * @width: It's an integer!
 *
 * @height: It's another integer!
 *
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * width);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(int) * height);
		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			array[j][i] = 0;
	}
	return (array);
}
