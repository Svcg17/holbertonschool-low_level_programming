#include "holberton.h"
#include <stdio.h>
/**
 * _realloc - function that realloctes a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: new size in bytes of the new memory block.
 * Return: value of new pointer.
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array;

	if (ptr == '\0')
		return (malloc(new_size));
	if (new_size == '\0' && ptr != '\0')
	{
		free(ptr);
		return ('\0');
	}
	if (new_size == old_size)
		return (ptr);

	array = malloc(new_size);

	if (array == '\0')
		return ('\0');
	if (old_size == old_size)
		old_size = old_size;
	else
		old_size = new_size;

	while (old_size--)
		array[old_size] = ((char *)ptr)[old_size];

	free(ptr);

	return (array);
}
