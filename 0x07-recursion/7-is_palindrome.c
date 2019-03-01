#include "holberton.h"
/**
 * _strlen - calculate lenght of a string
 * @s: string.
 * Return: length of string.
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
 * palindrome - (helper function)checks if a string is palindrome
 * @s1: first character of string.
 * @s2: last character of string.
 * Return: 1 if s is palindrome, 0 if it's not.
 */
int palindrome(char *s1, char *s2)
{
	if (s1 >= s2)
		return (1);
	if (*s1 != *s2)
		return (0);
	return (palindrome(s1 + 1, s2 - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to test.
 * Return: 1 if s is palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	return (palindrome(s, s + _strlen(s) - 1));
}
