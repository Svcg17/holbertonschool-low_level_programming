#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: pointer to a char for the name to be printed.
 * @f: function pointer taken as parameter to print string.
 */
void print_name(char *name, void (*f)(char *s))
{
	if (name == NULL || f == NULL)
		return;
	(f)(name);
}
