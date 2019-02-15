#include "holberton.h"
/**
 * print_triangle - function that prints a triangle.
 * @size: size of the triangle.
 * Return: 0.
 */
void print_triangle(int size)
{
int a, b;
if (size == 0 || size < 0)
{
_putchar('\n');
}
for (a = 1; a <= size; a++)
{
for (b = a; b < size; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
