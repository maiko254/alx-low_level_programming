#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int closefd(int fd);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int op1, op2, rd, wr;

	char *buf;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	op1 = open(argv[1], O_RDONLY);
	op2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	rd = read(op1, buf, 1024);
	wr = write(op2, buf, rd);

	if (op1 == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	if (op2 == -1 || wr == -1)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	free(buf);

	closefd(op1);
	closefd(op2);

	return (0);
}

/**
 * closefd - closes a file descriptor
 * @fd: file descriptor
 * Return: 0 on success
 */
int closefd(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %d", cl);
		exit(100);
	}

	return (cl);
}
