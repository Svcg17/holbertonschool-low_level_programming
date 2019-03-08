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
	char *array, *tmp = ptr;
	unsigned int i = 0;

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
	while (i < old_size && i < new_size)
	{
		array[i] = tmp[i];
		i++;
	}

	free(ptr);

	return (array);
}
