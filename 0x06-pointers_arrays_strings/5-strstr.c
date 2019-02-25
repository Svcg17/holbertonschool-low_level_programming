#include "holberton.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: string to be scanned.
 * @needle: string to be searched with in haystack.
 * Return: pointer to first occurrence in haystack specified in needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
