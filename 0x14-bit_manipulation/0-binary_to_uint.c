#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string representing binary number
 * Return: the converted number or 0 if
 *         there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;


	if (b == NULL || *b == '\0')
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = (num << 1) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}

	return (num);
}

