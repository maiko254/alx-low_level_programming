#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[i++])
		l++;

	for (i = 0; i < l; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
