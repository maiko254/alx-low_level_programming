#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * Desc - Header file containing all the declarations for functions 
 * used in 0x10-variadic_functions
 */

int _putchar(int c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_char_ptr(char *separator, va_list args);

/**
 * struct format_types - Struct format_types
 * @id: coversion specifier
 * @f: function pointer
 */
typedef struct format_types
{
	char *id;
	void (*f)(char *separator, va_list args);
} f_t;

#endif
