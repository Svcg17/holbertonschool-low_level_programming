#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the array.
 * Return: pointer to allocated memory, or if malloc fails return 98
 */
void *malloc_checked(unsigned int b)
{
	char *array = malloc(sizeof(char) * b);

	if (array == '\0')
		exit(98);

	return (array);
}
