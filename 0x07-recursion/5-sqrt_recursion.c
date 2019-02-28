#include "holberton.h"
/**
 * sqrtt - function to calculate square root of a num.
 * @n: number to calculate root square of.
 * @i: num.
 * Return: recursive sqrtt.
 */
int sqrtt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrtt(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a num.
 * @n: number to calculate root square of.
 * Return: root square of n.
 */
int _sqrt_recursion(int n)
{
	return (sqrtt(n, 0));
}
