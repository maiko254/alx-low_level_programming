#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit to get value of
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
		return (-1);

	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
