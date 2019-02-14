#include "holberton.h"
/**
 * jack_bauer - function to display every minute of the day of Jack Bauer .
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
int a;
int b;
int c;
int d;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
for (c = '0'; c <= '5'; c++)
{
for (d = '0'; d <= '9'; d++)
{
if (a < '2' && b <= '9')
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
}
if (a == '2' && b <= '3')
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
}
}
