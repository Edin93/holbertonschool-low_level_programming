#include <stdio.h>
int main(void)
{
	int i = 0;
	long U0 = 1;
	long U1 = 2;
	long Un = 0;
	long li = 4294967295;
	long l = 1000000000;
	long r = 0;
	long d = 0;

	printf("%lu, %lu, ", U0, U1);
	while (i < 98)
	{
		Un = U0 + U1;
		U0 = U1;
		U1 = Un;
		if (Un > li)
		{
			d = Un / l;
			r = Un % l;
			while (d > li)
			{
				d = d / l;
				printf("%lu", d);
				printf("%lu", d % l);
			}
			printf("%lu", d);
			while (r > li)
			{
				r = r / l;
				printf("%lu", r);
				printf("%lu", r % l);
			}
			printf("%lu", r);
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
