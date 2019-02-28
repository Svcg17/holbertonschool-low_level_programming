#include "holberton.h"
/**
 * _strlen - calculate lenght of a string
 * @s: string.
 * Return: i.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * palindrome - checks if a string is palindrome
 * @s: string to test.
 * @b: beggining of string.
 * @e: end of string.
 * Return: 1 if s is palindrome, 0 if it's not.
 */
int palindrome(char *s, int b, int e)
{
	int c = 1;

	if (b <= e)
	{
		if (s[b] == s[e])
			return (palindrome(s, b + 1, e - 1));
		else
			return (0);
	}
	else
		return (c);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to test.
 * Return: 1 if s is palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s) - 1;
	return (palindrome(s, 0, len));
}
