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

	for (i = 0; i < (len / 2); i++)
	{
		if (str[i] != str[len - 1 -i])
		    return (0);
	}

	return (1);
}
int main(void)
{
	int i, j;
	long r, p;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			r = i * j;
			if (isPali(r) == 1)
				p = r;
		}
	}
	printf("Palindrome = %ld\n", p);

	return (r);
}
