#include "holberton.h"
/**
 * print_rev - print a string in reverse and a newline.
 * @s: pointer to a char for the string.
 */
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
