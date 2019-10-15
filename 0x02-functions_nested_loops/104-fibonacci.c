#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long U0 = 1;
	long U1 = 2;
	long Un = 0;
	long l1 = 4294967295;
	long l2 = 1000000000;

	printf("%lu, %lu, ", U0, U1);
	while (i < 98)
	{
		Un = U0 + U1;
		U0 = U1;
		U1 = Un;

		if (Un > l1)
		{
			printf("%lu", Un / l2);
			printf("%lu", Un % l2);
		}
		else
		{
			printf("%lu", Un);
		}
		if (i < 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
