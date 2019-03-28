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
	int longitud = _strlen(b) - 1;
	int value = 0;
	int mult = 1;
	char s;
	int i;

	if (b == NULL)
		return ('\0');

	for (i = longitud; i >= 0; i--)
	{
		s = b[i];
		if (b[i] > '1' || b[i] < '0')
			return ('\0');
		else if (s == '1')
		{
			value += mult;
		}
		mult = mult * 2;
	}
	return (value);

}
