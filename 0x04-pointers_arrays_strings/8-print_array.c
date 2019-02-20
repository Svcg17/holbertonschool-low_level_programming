#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a char for the length.
 * Return: i.
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; *s != '\0'; i++)
	{
		++s;
	}
	return (i);
}
/**
 * print_array - print n elements of an array of ints.
 * @s: pointer to an int
 * @n: elements to be printed
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
