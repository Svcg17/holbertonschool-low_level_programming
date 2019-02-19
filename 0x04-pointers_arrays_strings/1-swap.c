#include "holberton.h"
/**
 * swap_int - swap the value of two integers.
 * @a: pointer to int to swap.
 * @b: pointer to int to swap.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
