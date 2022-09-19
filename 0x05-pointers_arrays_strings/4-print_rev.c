#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + 1))
		i++;

	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + 1));
		i--;
	}

	_putchar('\n');
}
