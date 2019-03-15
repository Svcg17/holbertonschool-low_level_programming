#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - function that prints strings followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (separator != NULL)
		{
			if (str != NULL)
			{
				if (i == n - 1)
					printf("%s", str);
				else
					printf("%s%s", str, separator);
			}
			else
			{
				if (i == n - 1)
					printf("(nil)");
				else
					printf("(nil)%s", separator);
			}
		}
	
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
	}


		putchar('\n');
		va_end(list);
}
