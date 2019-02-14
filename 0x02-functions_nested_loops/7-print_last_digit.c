#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number.
 * @c: integer taken to print the last digit
 * Return: c.
 */
int print_last_digit(int c)
{
int last;
if (c >= 0)
{
last = (c % 10);
_putchar(last + '0');
}
else if (c < 0)
{
last = (-1 * (c % 10));
_putchar(last + '0');
}
return (last);
}
