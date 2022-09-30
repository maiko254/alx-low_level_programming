#include <stdio.h>

/**
 * main - prints all arguments reeived
 * @argc: number of arguments supplied
 * @argv: array of arguments receivec
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
