#include "main.h"

/**
 * _strncat - concatenates two strings using at most
 * n bytes from second string
 *
 * @dest: STring to append to
 * @src: String to append
 * @n: bytes to use from src
 *
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j++])
		i++;

	for (j = 0; src[j] && j < n; j++)
		dest[i++] = src[j];

	return (dest);
}
