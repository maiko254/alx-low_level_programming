#include <stdio.h>

/**
 * main - Prints lowercase alphabet except q,e
 *
 * Return:0 Always zero
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != q && c != e)
			putchar(c);
	}

	putchar('\n');
	return (0);
}
