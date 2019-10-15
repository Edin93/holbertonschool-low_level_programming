#include <stdio.h>
void pn(long Un, long a, long b, long ib, long l);
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
	long a, b, ib;
	int j;

	printf("%lu, %lu, ", U0, U1);
	while (i < 98)
	{
		Un = U0 + U1;
		U0 = U1;
		U1 = Un;
		a = 0;
		b = 0;
		ib = 0;
		if (Un >= l1)
		{
			if (Un >= l0)
			{
				a = Un / l0;
				b = Un % l0;
				ib = b;
				pn(Un, a, b, ib, l0);
			}
			else if (Un >= l2)
			{
				a = Un / l2;
				b = Un % l2;
				ib = b;
				pn(Un, a, b, ib, l2);
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
/**
 * pn - print number.
 * @Un: current fibonacci number.
 * @a: Un / l.
 * @b: Un % l.
 * @ib: equals b.
 * @l: number limit.
 */
void pn(long Un, long a, long b, long ib, long l)
{
	int j,  z = 0;

	if (a + b == Un)
	{
		printf("%lu", a);
		printf("%lu", b);
	}
	else
	{
		if (ib / (l / 10) < 1)
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
