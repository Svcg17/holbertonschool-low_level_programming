#include "holberton.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: string to be scanned.
 * @needle: string to be searched with in haystack.
 * Return: pointer to first occurrence in haystack specified in needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
