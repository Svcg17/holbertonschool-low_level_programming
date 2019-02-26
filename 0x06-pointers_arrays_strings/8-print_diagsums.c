#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diagonals of a square matrix
 * @a: two dimensional array.
 * @size: size.
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		sum += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum, sum2);
}
