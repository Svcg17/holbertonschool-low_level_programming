#include "holberton.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string to be looked in.
 * @c: character to search in s.
 * Return: the first occurrence of the char c in s, or NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');


}
