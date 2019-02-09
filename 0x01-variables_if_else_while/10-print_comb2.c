#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
*/
int main(void)
{
int c;
int d;
for (d = '0'; d <= '9'; d++)
{
for (c = '0'; c <= '9'; c++)
{
putchar(d);
putchar(c);
if (c + d != 114)
{
putchar(',');
putchar(' ');
}
}
}
printf("\n");
return (0);
}
