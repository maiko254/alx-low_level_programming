#include <stdio.h>

/**
 * main - finds and prints largest prime factor
 *
 * Return:0 Always zero
 */

int main(void)
{
	long num = 612852475143;

	int count;

	for (count = 2; count < num; count++)
	{
		while ((num % count) == 0)
			num /= count;
	}
	printf("%lu\n", num);

	return (0);
}
