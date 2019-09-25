#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long U0 = 1;
	unsigned long U1 = 2;
	unsigned long Un = 0;
	unsigned long p1 = 0;
	unsigned long p2 = 0;
	unsigned long l = 4294967295;
	unsigned long l2 = 1000000000;

	while (i < 98)
	{
		if (i == 0)
		{
			printf("%lu", U0);
		}
		else if (i == 1)
		{
			printf("%lu", U1);
		}
		else
		{
			Un = U0 + U1;
			U0 = U1;
			U1 = Un;
			if (Un > l)
			{
				printf("%lu", Un / l2);
				printf("%lu", Un % l2);
			}
		else
		{
			printf("%lu", Un);
		}
	}
		if (i < 97)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
