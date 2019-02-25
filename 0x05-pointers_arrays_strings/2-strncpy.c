#include "holberton.h"
/**
 * _strncpy - function that copies a string.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * @n: integer.
 * Return: the string pointed to by dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *c = dest;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (c);
}
