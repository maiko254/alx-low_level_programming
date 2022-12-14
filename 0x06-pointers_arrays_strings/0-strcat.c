#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string to append to
 * @src: string to be appendedd
 *
 * Return: pointer to strint dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[j++])
		i++;

	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
