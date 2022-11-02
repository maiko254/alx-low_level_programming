#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 *
 * @filename: pointer to file
 * @letters: numbers of letters to read and print
 *
 * Return: 0 - if file can't be opened or read
 *         0 - if filename is NULL
 *         actual number of letters it could read and print
 *         0 - if write fails or doesn't write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, r, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	r = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, r);

	if (wr != r || op == -1 || r == -1 || wr == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wr);
}
