#include "holberton.h"
/**
 * leet - function that encodes a string into 1337.
 * @s: pointer to a char.
 * Return: pointer.
 */
char *leet(char *s)
{
	int i, d;
	char ch[] = {'a', 'A', '4', 'e', 'E', '3', 'o', 'O', '0', 't', 'T', '7', 'l', 'L', '1'};

	for(i = 0; s[i]; i++)
	{
		for (d = 2; d < (int)sizeof(ch); d+=3)
		{
			if (s[i] == ch[d - 1] || s[i] == ch[d - 2])
			{
				s[i] = ch[d];
			}
		}
	}
	return (s);
}
