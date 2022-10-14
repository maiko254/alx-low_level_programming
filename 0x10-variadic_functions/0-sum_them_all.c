#include "variadic_functions.h"

/**
 * sum_them_all - adds all function parameters
 * @n: first argument supplied to the function
 * @...: variable arguments supplied to the function
 *
 * Return: sum of all parameters, 0 if first parameter is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			sum += va_arg(ap, int);
			i++;
		}

		va_end(ap);

		return (sum);
	}

	return (0);
}
