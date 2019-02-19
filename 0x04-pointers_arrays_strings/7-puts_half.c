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
 * puts_half - print half of a string.
 * @str: pointer to a char.
 * Return: i.
 */
void puts_half(char *str)
{
int i;
int len = _strlen(str);
int n = ((len - 1) / 2 + 1);

if (len % 2 == 0)
{
for (i = (len / 2); i <= len - 1; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = n; i <= len; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
