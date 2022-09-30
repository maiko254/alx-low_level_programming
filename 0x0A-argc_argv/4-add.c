#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of two positive numbers, 0 if no number
 * is passed to program, Error if a non-digit is passed
 *
 * @argc: number of arguments passed to program
 * @argv: array of arguments passed to program
 *
 * Return: 0 if successful, 1 if argument is non-digit
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
