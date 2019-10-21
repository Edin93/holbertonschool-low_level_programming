#include <stdio.h>
#include <stdlib.h>
char *validateNum(char *p);
int len(char *p);
/**
 * main - multiply 2 positive numbers.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: void.
 */
int main(int argc, char **argv)
{
	char *a = argv[1];
	char *b = argv[2];

	if (argc == 3 && validateNum(a) != NULL && validateNum(b) != NULL)
	{
		int i, len1 = len(a), len2 = len(b);
		char *big, *small, *result;

		if (len1 >= len2)
		{
			big = a;
			small = b;
		}
		else
		{
			big = b;
			small = a;
		}


		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
/**
 * validateNum - validate number or not.
 * @p: pointer to char.
 * Return: 1 if valid number else NULL.
 */
char *validateNum(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] < 48 || p[i] > 57)
			return (NULL);
	}
	return (p);
}
/**
 * len - calculate number length (number of digits).
 * @p: pointer to char.
 * Return: length.
 */
int len(char *p)
{
	int len = 0;

	while (p[len] != '\0')
		len++;
	return (len);
}
