#include "main.h"

/**
 * _pow_recursion - gets value of x raised to power of y
 * @x: number to raise to power y
 * @y: number of times to multiply x by itself
 *
 * Return: value of x raused to y, -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
