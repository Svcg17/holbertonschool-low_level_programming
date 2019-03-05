#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _coins - function that prints the mininum num of coins to make a change.
 * @cents: amount of cents needed to give back.
 * Return: c (number of coins).
 */
int _coins(int cents)
{
	int c = 0;

	while (cents != 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cents -= 1;
		}
		c++;
	}
	return (c);
}
/**
 * main - Entry point.
 * @argc: amount of arguments passed to main.
 * @argv: arguments passed to main.
 * Return: 1 if argc is less than two args. 0 if success on the coin count.
 */
int main(int argc, char *argv[])
{
	int number;

	number = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", _coins(number));
	return (0);
}
