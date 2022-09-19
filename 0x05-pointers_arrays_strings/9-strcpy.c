#include "main.h"

/**
 * _strcpy - copies string pointed by src to *dest
 *
 * @dest: buffer to copy string to
 * @src: pointer to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index++])
		dest[index] = src[index];

	return (dest);
}
