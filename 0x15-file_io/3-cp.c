#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int op1, op2, rd, wr, cl1, cl2;

	char *buf;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}

	op1 = open(argv[1], O_RDONLY);
	op2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (op1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	rd = read(op1, buf, 1024);
	wr = write(op2, buf, rd);

	if (rd == -1)
	{	
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	if (op2 == -1 || wr == -1)
	{
		dprintf(2, "Error: Can't write to %s", argv[3]);
		exit(99);
	}

	free(buf);

	cl1 = close(op1);
	cl2 = close(op2);

	if (cl1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", cl1);
		exit(100);
	}

	if (cl2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", cl2);
		exit(100);
	}

	return (0);
}
