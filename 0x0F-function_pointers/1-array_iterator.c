#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter on
 * each element of an array
 * @array: array of pointer functions
 * @size: size of the array
 * @action: pointer to function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
