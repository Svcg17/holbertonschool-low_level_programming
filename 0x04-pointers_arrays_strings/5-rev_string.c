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
 * rev_string - function that reverses a string.
 * @s: pointer to a char.
 */
void rev_string(char *s)
{
	int i, len, c;

	len = _strlen(s) - 1;
	for (i = 0; i <= len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - i];
		s[len - i] = c;
	}
}
