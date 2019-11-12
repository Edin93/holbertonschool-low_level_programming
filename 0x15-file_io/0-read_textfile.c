#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the stdout.
 * @filename: filename.
 * @letters: number of letters it should read and print.
 * Return: the number of letters it could read and print.
 * if file cannot be opened or read, return 0.
 * if file filename is NULL, return NULL.
 * if write fails or doesn't write the expected number of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t s, z = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	s = read(f, buf, letters);
	if (s < z)
		return (0);
	write(STDOUT_FILENO, (void *)buf, s);
	return (s);
}
