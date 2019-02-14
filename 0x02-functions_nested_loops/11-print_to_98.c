#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - print from n to 98.
 * @n: number for reference to 98.
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; n <= 98; i++)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n >= 98)
{
for (i = n; n >= 98; i--)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
putchar('\n');
}
