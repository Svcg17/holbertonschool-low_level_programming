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
		if (isdigit(*argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			puts("Error");
			return (1);
		}
	}
	printf("%d\n", sum);

	if (argv[argc])
	{
		puts("0\n");
	}
	(void)argc;
	return (0);
}
