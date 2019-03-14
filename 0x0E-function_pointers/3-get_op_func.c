#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function to perform the
 * operation asked by the user.
 * @s: operator passed as argument to the program.
 * Return: pointer to the function that corresponds to the operator given.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
/* if position i in ops content = the char in s, if the char in s in only one*/
/* return the pointer to the func matching it*/
		if (ops[i].op[0] == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
 	}
	return (NULL);
}
