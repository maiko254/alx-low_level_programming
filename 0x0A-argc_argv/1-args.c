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
	printf("%d\n", argc - 1);
	return (0);
}
