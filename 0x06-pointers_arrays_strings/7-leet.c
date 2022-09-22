#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int i = 0, j;
	char enc[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == enc[j] || s[i] - 32 == enc[j])
				s[i] = j + '0';
		}

		i++;
	}

	return (s);
}
