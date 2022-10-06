#include "main.h"
#include <stdio.h>

/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each
 *
 * @nmemb: number of array elements to allocate memory
 * @size: bytes of each element
 *
 * Return: pointer to allocated memory, NULL if nmemb or size is 0,
 * NULL if memory allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	a = s;

	for (i = 0; i < (nmemb * size); i++)
		a[i] = '\0';

	return (s);
}
