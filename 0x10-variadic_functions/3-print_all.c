#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * types are c-char, i-integer, f-float, s-char *
 *
 * @...: variable arguments passed to function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_t f_types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_char_ptr}
	};

	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *f_types[j].id)
			{
				f_types[j].f(separator, args);
				separator = ", ";
			}

			j++;
		}

		i++;
	}

	va_end(args);

	printf("\n");
}

/**
 * print_char - prints character of type char
 * @separator: separator of the character
 * @args: list of variadic arguments
 */

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_integer - prints a character of type integer
 * @separator: separator of the character
 * @args: list of variadic arguments
 */
void print_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_float - prints a character of type float
 * @separator: separator of the character
 * @args: list of variadic arguments
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_char_ptr - prints what is in pointer to type char
 * @separator: separator of the character
 * @args: list variadic arguments
 */
void print_char_ptr(char *separator, va_list args)
{
	char *a = va_arg(args, char *);

	if (a == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, a);
}
