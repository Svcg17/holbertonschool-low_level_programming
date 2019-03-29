#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer value to use.
 * @index: index of the bit wanted.
 * Return: the value of the bit at index, -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 62)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
