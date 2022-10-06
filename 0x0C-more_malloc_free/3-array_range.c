#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array containing all the values from min to
 * max and ordered from min to max
 *
 * @min: minimum integer value to include in array
 * @max: maximum integer value to include in array
 *
 * Return: pointer to new array, NULL if min > max, NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *s;
	int i, j = 0, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	s = malloc(sizeof(int) * size);
	if (s == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		s[j] = i;
		j++;
	}

	return (s);
}
