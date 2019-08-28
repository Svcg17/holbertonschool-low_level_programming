#include "search_algos.h"
#include <math.h>
/**
 * _min - returns the min value between two numbers
 * @size: one of the numbers
 * @step: one of the numbers
 * Return: The minimun number
 */
size_t _min(int size, int step)
{
	if (size < step)
		return (size);
	else
		return (step);
}
/**
 * jump_search - searches for a value in a sorted array of ints
 * using Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t t = step;

	if (!array)
		return (-1);

	do {
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			break;
	} while ((array[_min(step, size) - 1] < value));
	printf("Value found between indexes [%lu] and [%lu]\n", prev - t, prev);
	prev = prev - t;
	do {
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == _min(step, size))
			return (-1);
	} while (array[prev] < value);

	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
