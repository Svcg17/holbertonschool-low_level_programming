 #include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = '0';
while (c <= '9')
{
putchar(c);
putchar(',');
putchar(' ');
if (c == '9')
{
putchar (c);
}
c = c + 1;
}
printf("\n");
return (0);
}
