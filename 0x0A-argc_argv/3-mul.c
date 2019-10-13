#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int multi;

	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
