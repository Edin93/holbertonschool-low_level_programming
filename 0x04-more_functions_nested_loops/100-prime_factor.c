#include <stdio.h>
#include <math.h>
/**
 * main - print largest prime factor of the number 612852475143.
 * Return: 0
 */
int main(void)
{
	int i;
	long n = 612852475143;
	long lpf = 0;


	i = 2;
	while (n != 1)
	{
		if (n % i == 0)
		{
			n = n / i;
			if (i > lpf)
			{
				lpf = i;
			}
			i = 2;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", lpf);
	return (0);
}
