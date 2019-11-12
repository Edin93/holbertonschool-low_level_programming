#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: name of file to create.
 * @text_content: string to write to the file.
 * Return: 1 on success, -1 on failure.
 * file permission 0600.
 * if the file already exists, truncate it.
 * if filename is NULL, return -1.
 * if text_content is NULL, create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t len = 0, fd;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len] != '\0')
		len++;
	wr = write(fd, (void *)text_content, len);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
