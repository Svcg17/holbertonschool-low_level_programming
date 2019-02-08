#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = '0';
char a = 'a';
while (c <= '9')
{
putchar(c);
c = c + 1;
}
while (a <= 'f')
{
putchar(a);
a = a + 1;
}
printf("\n");
return (0);
}
