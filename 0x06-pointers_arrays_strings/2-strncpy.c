#include "main.h"

/**
 * _strncpy - copies string upto n bytes
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j++])
		i++;

	for (j = 0; src[j] && j < n; j++)
		dest[j] = src[j];

	for (j = i; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
