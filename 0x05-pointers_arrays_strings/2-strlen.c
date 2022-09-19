#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
