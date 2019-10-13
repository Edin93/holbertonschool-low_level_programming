#include <stdio.h>
#include <stdlib.h>
/**
 * main - print program name
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: int.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
