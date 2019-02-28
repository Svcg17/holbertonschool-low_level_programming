#include "holberton.h"
int _strlen(char *s)
{
	int i;
	for (i = 0; s[i]; i++)
		;
	return (i);
}

int palindrome(char *s, int b, int e)
{
	if (b <= e)
	{
		if (s[b] == s[e])
			return (palindrome(s, b + 1, e - 1));
		else
			return 0;
	}
	else
		return (1);
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
	return(palindrome(s, 0, len));
}
