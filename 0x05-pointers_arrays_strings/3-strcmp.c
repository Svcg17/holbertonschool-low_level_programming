#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: pointer to a char.
 * @s2: pointer to a char
 * Return: depending on the comparison.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] && s2[i]) &&  s1[i] == s2[i])
	{
		i++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
