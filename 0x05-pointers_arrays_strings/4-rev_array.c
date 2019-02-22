#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array.
 * @a: pointer to an int.
 * @n: integer value
 * Return: i.
 */
void reverse_array(int *a, int n)
{
	int i, c;
	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
