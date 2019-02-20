#include "holberton.h"
/**
 * _strcpy - function that copies the string pointed to by src.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * Return: the pointer to dest (c).
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (c);
}
