#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches through a sorted array using binary search algo
 * @array: pointer to 1st element of array
 * @size: number of elements in the array
 * @value: value to search for in the array
 *
 * Return: index of value in the array
 *         -1 if array is null or value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	int i, low = 0;
	int high = size - 1;
	int half;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d ", array[i]);
		printf("\n");

		half = (low + high) / 2;

		if (value == array[half])
			return (half);
		else if (value < array[half])
			high = half - 1;
		else
			low = half + 1;
	}

	return (-1);
}
