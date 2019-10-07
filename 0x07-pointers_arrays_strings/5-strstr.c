#include "holberton.h"
/**
 * _strstr - find the 1st occurence of the substring needle in haystack.
 * @haystack: string.
 * @needle: substring to look for.
 * Return: pointer to the beginning of the located substring, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;
	int occur = 0;
	char *add;

	while (haystack[i] != '\0')
	{
		if (needle[0] == haystack[i] && haystack[i] != '\0')
		{
			add = &haystack[i];
			j = 0;
			while (needle[j] == haystack[i])
			{
				occur = 1;
				i++;
				j++;
			}
		}
		if (occur == 1)
		{
			return (add);
		}
		add = 0;
		occur = 0;
		i++;
	}
	return (0);
}
