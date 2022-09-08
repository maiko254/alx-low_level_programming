#include <stdio.h>

/**
 * main - prints the size of various
 * Return: 0 if successful, non-zero if not
 */
int main(void)
{
	printf("Size of an int: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of an int: %d byte(s)\n", sizeof(long int));
	printf("Size of an int: %d byte(s)\n", sizeof(long long int));
	printf("Size of an int: %d byte(s)\n", sizeof(float));
	return (0);
}
