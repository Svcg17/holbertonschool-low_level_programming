#include "holberton.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to a char to be copied to.
 * @n: n bytes from memory area.
 * @src: pointer to a char to copy from.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *temp = dest;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (temp);
}
