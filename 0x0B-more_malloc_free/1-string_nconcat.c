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
 * string_nconcat - function that concatenates two strings.
 * @s1: string.
 * @s2: string to concatenate.
 * @n: n amount of s2 to concatenate.
 * Return: pointer to newlly allocated space in memory with the concatenated
 * string, if fails return null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j = 0, len;
	char *array, *c;

	len = (_strlen(s1) + n);

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	array = malloc(sizeof(char) * len + 1);

	if (array == '\0')
		return ('\0');

	if ((int)n >=  _strlen(s2))
		n = _strlen(s2);

	for (i = 0; s1[i]; i++)
		array[i] = s1[i];

	c = array;
	while (array[j])
		array++;
	for (j = 0; s2[j] && j < n; j++)
		array[j] = s2[j];
	return (c);
}
