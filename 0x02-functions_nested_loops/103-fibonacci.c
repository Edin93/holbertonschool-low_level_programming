#include <stdio.h>
/**
 * main - prints sum of even fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	int i;
	long arr[50];
	long s = 0;

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i < 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	i = 0;
	while (arr[i] < 4000000)
	{
		if (arr[i] % 2 == 0)
		{
			s += arr[i];
		}
		i++;
	}
	printf("%ld\n", s);
	return (0);
}
