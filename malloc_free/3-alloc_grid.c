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

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
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
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
