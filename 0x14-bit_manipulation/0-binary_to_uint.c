#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string to convert
 *
 * Return: the converted number or 0 if b is NULL or one or more
 * chars in string b is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;

	if (*b == '\0')
		return (0);

	for (val = 0; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
			val = (val << 1) | 1;
		else if (*b == '0')
			val <<= 1;
	}

	return (val);
}
