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

	if (s == '\0')
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: amount of arguments.
 * @av: arguments passed to concatenate.
 * Return: the array, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *cat;
	int  i, len, a, b, t = 0;

	if (ac == 0 || av == '\0')
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		len = len + _strlen(av[i]);
	}

	cat = malloc(sizeof(char) * len + ac + 1);

	if (cat == '\0')
		return ('\0');

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			cat[t] = av[a][b];
			t++;
		}
		cat[t] = '\n';
		t++;
	}
	cat[t] = '\0';
	return (cat);
}
