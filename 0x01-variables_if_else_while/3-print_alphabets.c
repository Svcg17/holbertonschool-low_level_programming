#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
while (d <= 'Z')
{
putchar(d);
d = d + 1;
}
printf("\n");
return (0);
}
