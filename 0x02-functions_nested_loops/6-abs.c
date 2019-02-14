#include "holberton.h"
/**
 * _abs - compute the absolute value of an integer.
 * @c: value 
 */
int _abs(int c)
{
int l;
if (c < 0)
{
l = (-1 * c);
return (l);
}
else
{
return (c);
}
}
