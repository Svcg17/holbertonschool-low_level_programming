#include "function_pointers.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: number of parameters.
 * @argv: arguments passed from command line.
 * Return: 0 in success.
 */
int main(int argc, char *argv[])
{
	int (*function)(int, int);
	int total;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][1] == '/' || argv[2][1] == '%') && atoi(argv[3]) == '\0')
	{
		printf("Error\n");
		exit(100);
	}
/*getting the right pointer to the function of the op we need*/
	function = get_op_func(argv[2]);
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
/*get op from get_op_func*/
	total = function(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", total);
	return (0);
}
