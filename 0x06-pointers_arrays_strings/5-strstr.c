#include "holberton.h"
/**
 * strcmp - compare characters of two strings.
 * @a: pointer to a char.
 * @b: pointer to a char.
 * Return: 1 if characters match, 0 if they don't.
 */
int strcmp(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
			return (0);
		a++;
		b++;
	}
	return (1);
}
/**
 * _strstr - function that locates a substring.
 * @haystack: string to be scanned.
 * @needle: string to be searched with in haystack.
 * Return: pointer to first occurrence in haystack specified in needle
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		if (strcmp(haystack, needle))
			return (haystack);
		haystack++;
	}
	return ('\0');
}
