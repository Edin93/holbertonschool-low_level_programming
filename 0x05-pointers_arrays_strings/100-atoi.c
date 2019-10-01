#include "holberton.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string's pointer
 * Return: type integer.
 */
int _atoi(char *s)
{
	int i;
	int num_count = 0;
	int len = 0;
	int multi = 1;
	unsigned long num = 0;
	int current;
	int end = 0;

	while((*(s + len) != '\0'))
	{
		len++;
		if (s[len] == 45)
			multi = multi * -1;
		if (s[len] >= 48 && s[len] <= 57)
			num_count++;
	}

	if(num_count == 0)
	{
		return (0);
	}
	else
	{
		i = 0;
		for (i = 0; i <= len; i++)
		{
			if (s[i] >= 48 && s[i] <= 57 && end != 1)
			{
				current = s[i] - 48;
				num += num * 10 + (current);
			}
			while ( s[i + 1] < 48 && s[i + 1] > 57)
				end = 1;
		}
	}
	return (num * multi);
}
