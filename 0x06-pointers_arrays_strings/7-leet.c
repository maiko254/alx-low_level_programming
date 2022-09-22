#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int i = 0, j = 0, l = 5;
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < l)
		{
			if (s[i] == a[j] || s[i] - 32 == a[j])
				s[i] = b[j];

			j++;
		}

		i++;
	}

	return (s);
}
