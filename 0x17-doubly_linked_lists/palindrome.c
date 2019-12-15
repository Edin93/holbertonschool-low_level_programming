#include <stdio.h>
#include <stdlib.h>
int isPali(long r)
{
	int i;
	int len = 0;
	char str[10] = {0};

	sprintf(str, "%ld", r);

	while (str[len])
	       len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] - 48 != str[len - 1 -i] - 48)
		    return (0);
	}

	return (1);
}
int main(void)
{
	int i, j;
	long r, p = 0;

	for (i = 100; i < 1000; i++)
	{
		for (j = i; j < 1000; j++)
		{
			r = i * j;
			if (isPali(r) == 1 && r > p)
			{
				printf("r = %ld\n", r);
				p = r;
			}
		}
	}
	printf("Palindrome = %ld\n", p);

	return (r);
}
