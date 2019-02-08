#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = '0';
int d = ',';
int e = ' ';
while (c <= '9')
{
putchar(c);
putchar(d);
putchar(e);
c = c + 1;
}
printf("\n");
return (0);
}
