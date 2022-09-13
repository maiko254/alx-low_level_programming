#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @j: number to be used
 *
 * Return:0 Always zero
 */
int print_last_digit(int j)
{
	int last_digit = j % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
