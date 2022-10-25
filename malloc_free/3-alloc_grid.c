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

	int **array = malloc(sizeof(int) * width * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
