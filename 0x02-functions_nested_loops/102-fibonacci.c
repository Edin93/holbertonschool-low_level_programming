#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	int i;
	long long arr[50];

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < 50; i++)
	{
		printf("%lld", arr[i]);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
