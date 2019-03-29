#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit = 63;
	int f = 0;

	if (n == 0)
		_putchar ('0');
	while (bit >= 0)
	{
		if (n >> bit & 1)
		{
		_putchar('1');
		f++;
		}
		else if (f)
			_putchar ('0');
		bit--;
	}
}
