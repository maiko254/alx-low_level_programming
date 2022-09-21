#include "main.h"

/**
 * string_toupper -  changes all lowercase letters to uppercase
 * @s: string to convert
 * Return: pointer to converted string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i++])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
