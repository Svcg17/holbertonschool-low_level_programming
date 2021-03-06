#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of ints.
 * @width: width of array.
 * @height: height of array.
 * Return: the array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	array = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return ('\0');
	if (array == '\0')
		return ('\0');

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == '\0')
		{
			for (j = 0; j < height; j++)
				free(array[j]);

			free(array);
			return ('\0');
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
