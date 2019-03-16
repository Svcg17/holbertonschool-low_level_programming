#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct datatype - struct with different data types
 * @type: string to match.
 * @func: function pointer to return if matches with type.
 */
typedef struct datatype
{
	char *type;
	void (*func)(va_list list);
} data_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
