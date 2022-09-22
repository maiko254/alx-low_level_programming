#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = n;

	if (i / 10)
		print_number(i / 10);

	putchar((i % 10) + '0');
}
