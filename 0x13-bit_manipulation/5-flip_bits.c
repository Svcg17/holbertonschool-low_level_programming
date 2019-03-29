#include "holberton.h"
/**
 * flip_bits - number of bits you would need to flip to get from one num to no.
 * @n: integer to be used.
 * @m: integer to be used too.
 * Return: number of bits you would need to flip to get to another num.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	n = n ^ m;

	while (n)
	{
		if ((n & 1) != 0)
			i++;
		n = n >> 1;
	}
	return (i);
}
