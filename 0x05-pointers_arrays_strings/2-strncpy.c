#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a char for the length.
 * Return: i.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
 * _strncpy - function that copies a string.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * @n: integer.
 * Return: the string pointed to by dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *c = dest;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (j = i; j < n; j++)
		{
			dest[j] = '\0';
		}

	}
	return (c);
}
