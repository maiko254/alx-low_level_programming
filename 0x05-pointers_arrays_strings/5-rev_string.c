#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0, index = 0;
	char c;

	while (s[index++])
		i++;

	for (index = i - 1; index >= i / 2; index--)
	{
		c = s[index];
		s[index] = s[i - index - 1];
		s[len - index - 1] = i;
	}
}
