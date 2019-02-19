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
 * puts2 - print one char out of 2 of a string.
 * @str: pointer to a char to print.
 */
void puts2(char *str)
{
	int i = 0;
	int len;

	len = _strlen(str);
	for (i = 0; i <= len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
