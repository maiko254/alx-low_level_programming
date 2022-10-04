#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, len3, i = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	len3 = len1 + len2 + 1;

	a = malloc(len3);
	if (a == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}

	a[i] = '\0';

	return (a);
	free(a);
}
