#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function that handles validation inputs.
 * @argc: number of parameters.
 * @argv: arguments passed from command line.
 * Return: 0 in success.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
