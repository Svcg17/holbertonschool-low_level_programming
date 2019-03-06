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
 * argstostr - concatenates all the arguments of the program.
 * @ac: amount of arguments.
 * @av: arguments passed to concatenate.
 * Return: the array, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *cat;
	int  i, j, c, a, b, t = 0;

	if (ac == 0 || av == '\0')
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			c++;
	}

	cat = malloc(sizeof(char) * c);

	if (cat == '\0')
		return ('\0');

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
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
