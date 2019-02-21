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
 * _strcat - function that concatenates two strings.
 * @dest: pointer to a char.
 * @src: pointer to a char to append to dest.
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, len;
	char *c = dest;

	i = 0;
	len = _strlen(src);
	while (dest[i])
	{
		dest++;
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (c);
}
