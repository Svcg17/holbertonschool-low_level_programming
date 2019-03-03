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
	int i = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc < 1)
		{
			printf("0\n");
		}

		if (isdigit(*argv[i]))
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
