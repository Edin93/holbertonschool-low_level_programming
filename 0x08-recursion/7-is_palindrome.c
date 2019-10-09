#include "holberton.h"
int _strlen_recursion(char *s);
int pali(char *s, int len, int i);
/**
 * _strlen_recursion - returns the length of the string.
 * @s: string pointer.
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
/**
 * is_palindrome - check if a string is a palindrome.
 * @s: string pointer.
 * Return: 1 if s is palindrome, else 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pali(s, len - 1, 0));
}
/**
 * pali - check if palindrome
 * @s: string pointer.
 * @len: s length
 * @i: string index counter.
 * Return: expected result from is_palindrome.
 */
int pali(char *s, int len, int i)
{
	if (s[i] == s[len - i] && i == len / 2)
	{
		return (1);
	}
	else if (s[i] == s[len - i])
	{
		return (pali(s, len, i + 1));
	}
	else
		return (0);
}
