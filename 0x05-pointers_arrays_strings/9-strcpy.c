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
	int i = 0;

	while (*(src + 1) != 0)
	{
		*(dest + 1) = *(src + 1);
		i++;
	}

	return (dest);
}
