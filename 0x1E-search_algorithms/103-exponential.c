#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int mid = 0;
	int left = 0;
	int right = size - 1;
	int i = 0;

	if (!array)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *=2;
	}
	if (bound < size)
	{
		left = bound/2;
		right = bound;
		printf("Value found between indexes [%lu] and [%d]\n", bound - left, right);

	}
	else
	{
		left = bound/2;
		right = size - 1;
		printf("Value found between indexes [%lu] and [%d]\n", bound - left, right);

	}
	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);

}
