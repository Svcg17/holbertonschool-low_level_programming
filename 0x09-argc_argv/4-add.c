#include "holberton.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
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
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	        sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
