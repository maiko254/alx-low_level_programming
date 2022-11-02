#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to append
 *
 * Return: 1 - on success or if file exists
 *        -1 - on failure or filename is NULL or file doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, i);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
