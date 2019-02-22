#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a char for the length.
 * Return: i.
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: pointer to a char.
 * Return: i.
 */
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] = s[i] - 32;
			}
			continue;
		}
		if ((s[i] == ' ') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
	}
	return (s);
}
