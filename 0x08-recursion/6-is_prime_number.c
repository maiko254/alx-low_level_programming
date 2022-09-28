#include "main.h"
int check(int n, int i);

/**
 * is_prime_number - checks if integer is a prime number
 * @n: integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (check(n, 1));
}

/**
 * check - Check if number is prime
 * @n: number to check
 * @i: number of times to iterate
 *
 * Return: 1 if prime, 0 otherwise
 */

int check(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check(n, i + 1));
}
