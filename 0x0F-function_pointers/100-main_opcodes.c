#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints opcodes of itself.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: integer.
 */
int main(int argc, char *argv[])
{
	int nb;
	int i;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;

	for (i = 0; i < nb; i++)
	{
		printf("%.2hhx", p[i]);
		if (i != nb - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
