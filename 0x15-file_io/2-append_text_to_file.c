#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file
 * @text_content: string to append end of file
 * Return: 1 on success
 *         -1 on failure
 *         -1 if filename is NULL
 *         1 if file exists and text_content is NULL
 *         -1 if text_content is NULL and file doesn't exist or
 *            you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t op, wr, i;

	i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	wr = write(op, text_content, i);

	if (wr == -1 || op == -1)
		return (-1);

	close(op);

	return (1);
}
