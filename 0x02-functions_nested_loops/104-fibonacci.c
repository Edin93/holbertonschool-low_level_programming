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
	long l0 = 1000000000000;
	long l1 = 4294967295;
	long l2 = 1000000000;
	long a, b, z, ib;
	int j;

	printf("%lu, %lu, ", U0, U1);
	while (i < 98)
	{
		Un = U0 + U1;
		U0 = U1;
		U1 = Un;
		a = 0;
		b = 0;
		z = 0;
		ib = 0;

		if (Un >= l1)
		{
			if (Un >= l0)
			{
				a = Un / l0;
				b = Un % l0;
				ib = b;
				if (a + b == Un)
				{
					printf("%lu", a);
					printf("%lu", b);
				}
				else
				{
					if (ib / (l0 / 10) < 1)
					{
						ib *= 10;
						z += 1;
					}
					printf("%lu", a);
					for (j = 0; j < z; j++)
					{
						printf("0");
					}
					printf("%lu", b);
				}
			}
			else if (Un >= l2)
			{
				a = Un / l2;
				b = Un % l2;
				ib = b;
				if (a + b == Un)
				{
					printf("%lu", a);
					printf("%lu", b);
				}
				else
				{
					if (ib / (l2 / 10) < 1)
					{
						ib *= 10;
						z += 1;
					}
					printf("%lu", a);
					for (j = 0; j < z; j++)
					{
						printf("0");
					}
					printf("%lu", b);
				}
			}
		}
		else
		{
			printf("%lu", Un);
		}
		if (i < 97)
			printf(", ");
		printf("\n");
		i++;
	}
	printf("\n");
	return (0);
}
