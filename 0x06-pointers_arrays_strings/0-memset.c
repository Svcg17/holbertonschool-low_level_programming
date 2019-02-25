#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to a char.
 * @b: char value to fill with.
 * @n: n bytes to fill.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *temp = s;

	for (i = 0; n > 0; i++)
	{
		temp[i] = b;
		n--;
	}
	return (temp);
}
