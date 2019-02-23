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
 * separator - hhhh
 * @c: pointer to a char for the length.
 * Return: i.
 */
int separator(char *c)
{
	char sepa[] = {' ','\t','\n',',',';','.','!',
		     '?','"','(',')','{','}'};
	int i;
	i = _strlen(sepa) - 1;
	while(i--)
	{
		if (*c == sepa[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: pointer to a char.
 * Return: i.
 */
char *cap_string(char *s)
{
	int i;

	if(*s >= 'a' && *s <= 'z')
	{
		*s = *s - 32;
	}
	for (i = 1; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z'&& separator(&s[i - 1]))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
