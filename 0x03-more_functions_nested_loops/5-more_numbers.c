#include "holberton.h"
/**
 * more_numbers - print 10 times the numbers form 0 to 14.
 */
void more_numbers(void)
{
int c, d;
for (d = 0; d < 10; d++)
{
for (c = 0; c <= 14 ; c++)
{
if (c > 9)
{
_putchar('0' + (c / 10));
}
_putchar('0' + (c % 10));
if (c == 14)
{
_putchar('\n');
}
}
}
}
