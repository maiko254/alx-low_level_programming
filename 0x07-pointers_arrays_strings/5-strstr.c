#include "main.h"

/**
 * _strstr - finds occurence of substring needle in haystack
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: pointer to start of substring or NuLL if none
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;

			j++;
		}

		if (needle[j] == '\0')
			return (haystack + i);

		i++;
	}

	return ('\0');
}
