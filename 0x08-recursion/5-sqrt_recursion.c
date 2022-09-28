#include "main.h"
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - finds natural square root of a number
 * @n: number to get square root of
 *
 * Return: square root of n, -1 if none
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: number to get square root of
 * @i: iteration number
 *
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int j = i * i;

	if (j > n)
		return (-1);

	if (j == n)
		return (i);

	return (_sqrt(n, i + 1));
}
