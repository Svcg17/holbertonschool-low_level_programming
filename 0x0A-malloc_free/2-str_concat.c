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
 * str_concat - concatenates two strings
 * @s1: first string.
 * @s2: string to add to first one.
 * Return: pointer to a newly allocated space in memory, null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i = 0;
	int j;
	int len;
	char *c;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	len = _strlen(s1) + _strlen(s2);
        new = malloc(sizeof(char) * len + 1);

	if (new == '\0')
		return ('\0');

	for (j = 0; s1[j]; j++)
	{
		new[j] = s1[j];
	}

	c = new;
	while (new[i])
	{
		new++;
	}
	for (i = 0; i <= _strlen(s2); i++)
	{
		new[i] = s2[i];
	}
	return (c);
}
