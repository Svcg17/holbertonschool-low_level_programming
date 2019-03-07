#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string.
 * @n: size of string 2 to concatenate.
 * @s2: string to add to first one.
 * Return: pointer to a newly allocated space in memory, null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int i, a, c;
	unsigned int j, b;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	if (j > n)
		j = n;

	array = malloc(sizeof(char) * (i + j + 1));

	if (array == '\0')
		return ('\0');
	for (a = 0; a < i; a++)
		array[c++] = s1[a];
	for (b = 0; b < j; b++)
		array[c++] = s2[b];
	array[c] = '\0';
	return (array);
}
