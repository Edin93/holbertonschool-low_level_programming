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
			while (needle[j] != '\0')
			{
				if (needle[j] == haystack[i])
				{
					i++;
					j++;
					occur = 1;
				}
				else
				{
					occur = 0;
					break;
				}
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
