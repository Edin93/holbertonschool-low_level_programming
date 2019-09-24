#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	int i;
	double arr[50];

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 98; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < 98; i++)
	{
		printf("%.0lf", arr[i]);
		if (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
