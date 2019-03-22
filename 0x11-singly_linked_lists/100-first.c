#include "lists.h"
#include <stdio.h>
/**
 * _string - prints before main is executed
 */
void _string(void) __attribute__((constructor));
void _string(void)
{
	printf("You're beat! and yet, you must allow,\n\bI bore my house upon my back!\n");
}
