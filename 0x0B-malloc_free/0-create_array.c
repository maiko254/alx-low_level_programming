#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size:  size of the array
 * @c: char to be in array
 *
 * Return: pointer to ther array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';

	return (s);
	free(s);
}
