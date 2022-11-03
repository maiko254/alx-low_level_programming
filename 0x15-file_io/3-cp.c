#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buff(char *filename);
void close_fd(int fd);

/**
 * create_buff - creates buffer allocated 1024 bytes
 * @filename: name of file with char to store in buffer
 *
 * Return: pointer to allocated buffer
 */
char *create_buff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}


/**
 * close_fd - closes file descriptors
 * @fd: file descriptor to close
 */
void close_fd(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments supplied to program
 * @argv: pointer to array of supplied arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int opfrom, opto, wr, rd;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buff(argv[2]);
	opfrom = open(argv[1], O_RDONLY);
	rd = read(opfrom, buf, 1024);
	opto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (opfrom == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}

		wr = write(opto, buf, rd);
		if (opto == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		rd = read(opfrom, buf, 1024);
		opto = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buf);
	close_fd(opfrom);
	close_fd(opto);

	return (0);
}
