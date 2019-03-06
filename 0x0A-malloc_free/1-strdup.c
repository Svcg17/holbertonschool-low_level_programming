#include "holberton.h"
#include <stdlib.h>
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
	int i, j;

	if (str == '\0')
		return ('\0');

	for (i = 0; str[i]; i++)
		;

	s = malloc(sizeof(char) * (i + 1));

	if (s == '\0')
	{
		return ('\0');
	}

	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}

	s[j + 1] = 0;
	return (s);
}
