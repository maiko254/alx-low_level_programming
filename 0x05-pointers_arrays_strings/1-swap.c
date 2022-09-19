#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: pointer to 1st integer
 * @b: pointer to 2nd integer
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
