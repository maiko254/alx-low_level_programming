#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return:0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s2 != '\0')
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
