#include "holberton.h"
/**
 * prime - helper function of is_prime_number
 * @n: number to check if it is a prime num.
 * @i: equal to 2 to begin checking.
 * Return: 1 if n is prime, 0 if it is not.
 */
int prime(int n, int i)
{
	if (n / 2 < i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime(n, i + 1));
}
/**
 * is_prime_number - function that checks if an integer is a prime num.
 * @n: number to check if it is a prime num.
 * Return: 1 if n is prime, 0 if it's not.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime(n, 2));
}
