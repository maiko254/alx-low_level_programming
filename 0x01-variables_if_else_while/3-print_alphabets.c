#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return:0 Always zero
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
