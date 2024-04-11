#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array using the
 *               jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for in the array
 * Return: The first index where the value is found
 *         -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, start, end, i;

	if (array == NULL)
		return (-1);
	prev = 0;
	step = sqrt(size);

	while (array[prev] < value && prev < size)
	{
		printf("Value checked array [%ld] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= size)
			break;
	}

	start = prev - step;
	end = prev < size ? prev : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", start, prev);

	for (i = start; i <= end; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
