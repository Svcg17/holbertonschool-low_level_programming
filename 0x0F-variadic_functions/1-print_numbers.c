#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a newline.
 * @separator: string to be printed between numbers.
 * @n: numbe of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(list, int);
		if (separator != NULL)
		{
			if (i == n - 1)
			{
				printf("%d", number);
			}
			else
			printf("%d%s", number, separator);
		}
		else
			printf("%d", number);
	}
	putchar('\n');
	va_end(list);
}
