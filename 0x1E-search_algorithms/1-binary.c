#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array using binary
 *                 search algorithm
 * @array: Pointer to the first element in the sorted array to search in
 * @size: Number of elements in the array
 * @value: The value to search for in the array
 * Return: The index where the value is located in the array
 *         -1 if the value is not found or the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high, low, mid, i;

	if (array == NULL)
		return (-1);
	high = size - 1;
	low = 0;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = (high + low) / 2;
		if (value > array[mid])
		{
			low = mid + 1;
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
