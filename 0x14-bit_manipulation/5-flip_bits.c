#include "main.h"

/**
 * flip_bits - gets number of bits needed to flip to get
 * @n: the number
 * @m: the number to flip n to
 * Return: number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int count;

	count = 0;

	for (i = 0; i < sizeof(n) * 8; i++)
	{
		if ((n & (1UL << i)) != (m & (1UL << i)))
			count++;
	}

	return (count);
}
