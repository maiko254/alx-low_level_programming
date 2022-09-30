#include <stdo.h>

/**
 * main - prints number of arguments supplied
 * @argc: number of arguments supplied to program
 * @argv: array of arguments supplied to program
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	int i, j = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			j++;
	}

	printf("%d\n", j);

	return (0);
}
