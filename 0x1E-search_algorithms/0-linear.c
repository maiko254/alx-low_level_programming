#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to search for in the array
 *
 * Return: first index where value is found
 *         -1 if value is not found or array is Null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] =  [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
