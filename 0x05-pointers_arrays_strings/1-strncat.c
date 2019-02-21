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
 * _strncat - function that concatenates two strings.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * @n: integer delimiter.
 * Return: c.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *c = dest;

	i = 0;

	while (dest[i])
	{
		dest++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (c);
}
