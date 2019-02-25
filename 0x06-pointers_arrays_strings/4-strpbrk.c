#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be looked in.
 * @accept: string specifierx.
 * Return: s or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
