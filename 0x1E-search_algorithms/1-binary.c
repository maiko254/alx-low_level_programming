#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers using
 *                 the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: index of value in the array or
 *         -1 if array is NULL or value is not present in the array
 */
int binary_search(int *array, size_t size, int value)
{
	int i, low = 0;
	int high = size - 1;
	int mid;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d ", array[i]);
		printf("\n");

		mid = (low + high) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
