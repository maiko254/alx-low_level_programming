#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return:0 Always zero
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
