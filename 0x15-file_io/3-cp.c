#include "holberton.h"
/**
 * perr1 - print error 1.
 * @err: error message.
 * @fname: file name.
 * @num: exit status number.
 */
void perr1(char *err, char *fname, int num)
{
	dprintf(STDERR_FILENO, "%s%s\n", err, fname);
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
	dprintf(STDERR_FILENO, "%s%d\n", err, fdesc);
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
	char *file_from, *file_to, content[1024];
	ssize_t ffd, ftd, rff, wft;
	int cff, cft;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	ffd = open(file_from, O_RDONLY);
	if (ffd == -1)
		perr1("Error: Can't read from file ", argv[1], 98);

	ftd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (ftd == -1)
		perr1("Error: Can't write to ", argv[2], 99);

	while ((rff = read(ffd, content, 1024)) > 0)
	{
		wft = write(ftd, content, rff);
		if (wft == -1 || wft != rff)
			perr1("Error: Can't write to ", argv[2], 99);
	}
	if (rff == -1)
		perr1("Error: Can't read from file ", argv[1], 98);

	cff = close(ffd);
	if (cff == -1)
		perr2("Error: Can't close fd ", cff, 100);
	cft = close(ftd);
	if (cft == -1)
		perr2("Error: Can't close fd ", cft, 100);

	return (0);
}
