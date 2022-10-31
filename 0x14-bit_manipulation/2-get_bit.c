#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the bit
 * @index: index of the bit to get
 *
 * Return: value of the bit at index or -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
