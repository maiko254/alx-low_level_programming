#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of 2 dimensional array
 * @height: height of 2 dimensional array
 *
 * Return: pointer to 2 dimensional array, NULL if width or height is <= 0
 */

int **alloc_grid(int width, int height)
{
	int **two;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	two = malloc(sizeof(int *) * height);

	if (two == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		two[h] = malloc(sizeof(int) * width);

		if (two[h] == NULL)
		{
			for (; h >= 0; h--)
				free(two[h]);

			free(two);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			two[h][w] = 0;
	}

	return (two);
}
