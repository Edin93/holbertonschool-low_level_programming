#include <stdio.h>
#include <stdlib.h>
char *validateNum(char *p);
int len(char *p);
int getNum(char *p);
/**
 * main - multiply 2 positive numbers.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: void.
 */
void main(int argc, char **argv)
{
	char *a = argv[1];
	char *b = argv[2];

	if (argc == 3 && validateNum(a) != NULL && validateNum(b) != NULL)
	{
		int n1 = getNum(a);
		int n2 = getNum(b);

		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
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
 * getNum - get number from its pointer to char.
 * @p: pointer to char.
 * Return: number as int.
 */
int getNum(char *p)
{
	int i, len1 = len(p);
	int v = 0;

	for (i = 0; i < len1; i++)
	{
		v = v * 10 + (p[i] - 48);
	}
	return (v);
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
