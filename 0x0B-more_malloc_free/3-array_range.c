#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: mininum value.
 * @max: maximum value of int.
 * Return: the pointer to the newly created array. NULL if min > max.
 * NULL if malloc fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int len = max - min + 1;

	if (min > max)
		return ('\0');

	array = malloc(sizeof(int) * len);

	if (array == '\0')
		return ('\0');

	for (i = 0; i < len; i++)
	{
		array[i] = min++;
	}
	return (array);
}
