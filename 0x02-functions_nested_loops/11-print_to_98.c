#include <stdio.h>
#include "holberton.h"
void print_to_98(int n)
{
int i;   
if (n == 98)
{
printf("%d", n);
}
else if (n <= 98)
{
for (i = n; n <= 98; i++)      
{
  if (i != 98)
    {
printf("%d, ", n);
    }
}
}
else if (n >= 98)
{
for (i = n; n >= 98; i--)
{
  if (i != 98)
    {
 printf("%d, ", n);
    }
 }
}
putchar('\n');
}
