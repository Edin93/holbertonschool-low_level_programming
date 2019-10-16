#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: pointer to string 1.
 * @s2: pointer to strin 2.
 * Return: new allocated space in memory containing the content of s1, followed
 * by the content of s2, and null terminated. OR NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int len, i = 0;
	char *p;

	if (s1 != '\0')
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != '\0')
	{
		while (s2[len2] != '\0')
			len2++;
	}
	len = len1 + len2;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		p[i + len1] = s2[i];
		i++;
	}
	p[len] = '\0';
	return (p);
}
