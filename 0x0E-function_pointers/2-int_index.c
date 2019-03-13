#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer.
 * @array: array of integers to be searched.
 * @size: the number of elements in the array.
 * @cmp: pointer to the function to be used to compare values.
 * Return: -1 if no matches exist and if size is less than 0;
 * Return: the index of the first element for which cmp doesn't return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL || cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]) != '\0')
			return (i);
		}
	}
	return (-1);
}
