#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a char for the length.
 * Return: i.
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int longitud;
	int value = 0;
	int mult = 1;
	int i;
	char s;

	if (b == NULL)
		return (0);

	longitud = _strlen(b);
	for (i = longitud - 1; i >= 0; i--)
	{
		s = b[i];
		if (s != '1' && s != '0')
			return (0);

		if (s == '1')
		{
			value += mult;
		}
		mult = mult * 2;
	}
	return (value);
}
