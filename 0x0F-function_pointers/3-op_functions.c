#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: value after subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication value of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: value from division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds remainder of division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a/b
 */
int op_mod(int a, int b)
{
	return (a  % b);
}
