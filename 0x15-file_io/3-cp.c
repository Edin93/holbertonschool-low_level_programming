#include "holberton.h"
/**
 * perr1 - print error 1.
 * @err: error message.
 * @fname: file name.
 * @num: exit status number.
 */
void perr1(char *err, char *fname, int num)
{
	if (fname == NULL)
		dprintf(STDERR_FILENO, "%s\n", err);
	else
		dprintf(STDERR_FILENO, "%s %s\n", err, fname);
	exit(num);
}
/**
 * perr2 - print error 2.
 * @err: error message.
 * @fdesc: file descriptor.
 * @num: exit status number.
 */
void perr2(char *err, int fdesc, int num)
{
	dprintf(STDERR_FILENO, "%s %d\n", err, fdesc);
	exit(num);
}
/**
 * main - copies content of a file to another file.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: int.
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to, *content;
	ssize_t ffd, ftd;
	ssize_t rff, wft;
	int cff, cft;

	if (argc != 3)
		perr1("Usage: cp file_from file_to\n", NULL, 97);

	file_from = argv[1];
	file_to = argv[2];

	ffd = open(file_from, O_RDONLY);
	if (ffd == -1)
		perr1("Error: Can't read from file ", argv[1], 98);

	ftd = open(file_to, O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (ftd == -1)
		perr1("Error: Can't write to ", argv[2], 99);

	content = malloc(sizeof(char) * 1024);
	while ((rff = read(ffd, content, 1024)) != 0)
	{
		if (rff == -1)
			perr1("Error: Can't read from file ", argv[1], 98);
		wft = write(ftd, content, rff);
		if (wft == -1)
			perr1("Error: Can't write to ", argv[2], 99);
	}

	cff = close(ffd);
	if (cff == -1)
		perr2("Error: Can't close fd ", ffd, 100);
	cft = close(ftd);
	if (cft == -1)
		perr2("Error: Can't close fd ", ftd, 100);

	return (0);
}
