#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	int spc = 13;
	char sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'}

	while (s[i])
	{
		j = 0;

		while (j < spc)
		{
			if ((i == 0) || s[i - 1] == sep[i] && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
