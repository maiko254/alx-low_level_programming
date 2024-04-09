#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using
 *                 the Linear search algorithm
 * @array: Pointer to the first element of the array to search
 * @size:  Number of elements in the array
 * @value: The value to search for in the array
 * Return: The first index where value is located
 *         -1 if value is not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return(-1);
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return(i);
		} else {
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return(-1);
}
