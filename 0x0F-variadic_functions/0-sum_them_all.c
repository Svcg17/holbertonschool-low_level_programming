#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: first argument.
 * Return: if n == 0 return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int next, sum = 0;
	unsigned int i;
	va_list l;

	if (n == 0)
		return (0);
	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		next = va_arg(l, int);
		sum = sum + next;
	}
	va_end(l);
	return (sum);
}
