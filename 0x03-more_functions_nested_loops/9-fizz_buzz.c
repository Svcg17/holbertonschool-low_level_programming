#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
for (c = 1; c <= 100; c++)
{
if (c % 3 == 0 && c % 5 == 0)
{
printf("FizzBuzz ");
}
else if (c % 3 == 0)
{
printf("Fizz ");
}
else if (c % 5 == 0 && c != 100)
{
printf("Buzz ");
}
else if (c % 5 == 0 && c == 100)
{
printf("Buzz");
}
else
{
printf("%d ", c);
}
}
putchar('\n');
return (0);
}
