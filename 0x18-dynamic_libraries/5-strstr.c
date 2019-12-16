#include "holberton.h"
/**
 * _strstr - find the 1st occurence of the substring needle in haystack.
 * @haystack: string.
 * @needle: substring to look for.
 * Return: pointer to the beginning of the located substring, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j;
	int occur = 0;
	char *add;

	while (haystack[i] != '\0')
	{
		if (needle[0] == '\0')
		{
			return (haystack);
		}
		if (needle[0] == haystack[i])
		{
			occur = 1;
			add = &haystack[i];
			j = 0;
			while (needle[j] != '\0' && haystack[i] != '\0')
			{
				if (needle[j] == haystack[i])
				{
					occur = 1;
					i++;
					j++;
				}
				else
				{
					occur = 0;
					break;
				}
			}
			if (occur == 1)
			{
				return (add);
			}
		}
		i++;
	}
	return (0);
}
