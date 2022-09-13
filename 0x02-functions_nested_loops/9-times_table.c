#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return:void
 */
void times_table(void)
{
	int n, j, ans;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			ans = n * j;

			if (ans <= 9)
				_putchar(' ');
			else
				_putchar((ans / 10) + '0');

			_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}
