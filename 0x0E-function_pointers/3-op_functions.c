#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: first integer to sum.
 * @b: second integer to sum.
 * Return: addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first integer to make difference.
 * @b: second integer to make difference.
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b.
 * @a: first integer to multiply.
 * @b: second integer to multiply.
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b.
 * @a: first integer to be divided.
 * @b: second integer to be divided by.
 * Return: division.
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the remainde of the division of a by b.
 * @a: first integer to be divided by b.
 * @b: second integer to divide from.
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
