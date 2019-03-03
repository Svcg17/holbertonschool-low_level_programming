#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - checks for a digit from 0 through 9.
 * @s: char taken to check the conditions.
 * Return: 1 is c is digit.
 */
int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] < '0' || s[i] > '9') && (i == 0 && s[i] == '-'))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: number of arguments.
 * @argv: array of pointers to the arguments entered.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
