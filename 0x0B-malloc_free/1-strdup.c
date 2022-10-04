#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to duplicate of given parameter
 * @str: string to duplicate and return pointer
 *
 * Return: pointer to duplicate of str
 */

char *_strdup(char *str)
{
	char *s;
	char *p;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	s = malloc(len + 1);
	if (str == NULL || s == NULL)
		return (NULL);

	p = s;
	while (*str)
		*p++ = *str++;

	*p = '\0';
	return (s);
	free(s);
}
