#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to function
 * @...: variable parameters passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	if (n > 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", s);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}

		va_end(ap);
	}

	printf("\n");
}
