#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a char for the length.
 * Return: i.
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
 * string_toupper - function that changes all lowercase to uppercase.
 * @s: pointer to a char.
 * Return: s.
 */
char *string_toupper(char *s)
{
	int i = 0;
	int len = _strlen(s);

	for (i = 0; i <= len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
