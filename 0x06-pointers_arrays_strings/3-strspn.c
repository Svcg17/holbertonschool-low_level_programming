#include "holberton.h"
/**
 * _strspn - function that gets the lenght of a prefix substring.
 * @s: string to be scanned.
 * @accept: string with the characters to match.
 * Return: number of bytes in s that are accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	c = 0;
	for (i = 0; s[i]; i++)
	{
		if (c != i)
		{
			break;
		}
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
	}
	return (c);
}
