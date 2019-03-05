#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a char for the length.
 * Return: i.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strcpy - function that copies the string pointed to by src.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * Return: the pointer to dest (c).
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: string to make a copy of.
 *
 * Return: NULL if size = 0, pointer to the copied string  or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *s;
	int len = _strlen(str);

	if (str == '\0')
		return ('\0');

	s = malloc(len + 1);

	if (s == '\0')
	{
		free(s);
		return ('\0');
	}
	_strcpy(s, str);
	return (s);
}
