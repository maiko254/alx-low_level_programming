#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings s1 and s2 upto n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: numbers of bytes of s2 to concatenate on s1
 *
 * Return: pointer to concatenated string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len = 0, len2, i = 0;
	unsigned int j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len])
		len++;
	len2 = len + n + 1;

	s = malloc(len2);
	if (s == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		s[i] = *s1;
		s1++;
		i++;
	}

	for (j = 0; s2[j] && j < n; j++)
		s[i++] = s2[j];

	s[i] = '\0';

	return (s);
}
