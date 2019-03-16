#include "variadic_functions.h"
#include <stdarg.h>
void _charp(va_list list)
{
	printf("%c", va_arg(list, int));
}

void _intp(va_list list)
{
	printf("%d", va_arg(list, int));
}

void _floatp(va_list list)
{
	printf("%f", va_arg(list, double));
}
void _stringp(va_list list)
{
	char *s;
	s = va_arg(list, char*);
	if (s != NULL)
		printf("%s", s);
	else
		printf("(nil)");
}


/**
 * print_all - function that prints anything.
 * @format: list of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	data_t types[] = {
		{"c", _charp},
		{"i", _intp},
		{"f", _floatp},
		{"s", _stringp},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	va_list list;

	char *sepa = "";
	va_start(list, format);

	while(format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if(format[i] == *types[j].type)
			{
				printf("%s", sepa);
				types[j].func(list);
				sepa = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);

}
