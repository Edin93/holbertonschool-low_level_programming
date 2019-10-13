#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds 2 positive numbers.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
