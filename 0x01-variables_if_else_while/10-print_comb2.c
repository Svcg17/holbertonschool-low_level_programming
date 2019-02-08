#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
*/
int main(void)
{
int c = 0;
while (c < 100)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
if (c != 99)
{
putchar(',');
putchar(' ');
}
c = c + 1;
}
putchar('\n');
return (0);
}
