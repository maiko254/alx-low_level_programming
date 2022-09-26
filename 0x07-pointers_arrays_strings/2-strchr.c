#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check for occurence of char
 * @c: character to check for
 * Return: pointer to c in string or null if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
