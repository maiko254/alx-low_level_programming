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
	int i;
	unsigned int n = 0, m = 1;

	if (*b == '\0')
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		n += (b[i] - '0') * m;
		m *= 2;
	}

	return (n);
}
