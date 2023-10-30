#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 * Return: 1 on success
 *         -1 on failure
 *         -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t op, wr, i;

	i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	wr = write(op, text_content, i);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
