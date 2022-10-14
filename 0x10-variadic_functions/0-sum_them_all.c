#include <stdarg.h>
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
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
