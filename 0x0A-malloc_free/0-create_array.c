#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initialized with a char.
 * @c: character to initialize array.
 * @size: size of the array.
 *
 * Return: NULL if size = 0, pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char *) * size);

	if (size == '\0')
		return ('\0');

	if (array == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
	free(array);
}
