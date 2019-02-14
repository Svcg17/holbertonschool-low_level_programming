#include "holberton.h"
/**
 * _isupper - checks for uppercase characters.
 * @c: integer taken to check for uppercase characters.
 * Return: 1 if c is uppercase.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
