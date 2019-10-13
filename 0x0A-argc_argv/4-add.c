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
	int i, j;
	char *curr;
	int len;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		curr = argv[i];
		len = 0;
		while (curr[len] != '\0')
			len++;
		for (j = 0; j < len; j++)
		{
			if (!isdigit(curr[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
