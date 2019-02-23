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
		++s;
	}
	return (i);
}
/**
 * print_rev - print a string in reverse.
 * @s: pointer to a char.
 */

void print_rev(char *s)
{
	int i =  _strlen(s);

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
