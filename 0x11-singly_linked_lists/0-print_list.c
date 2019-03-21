#include "lists.h"
#include <stdio.h>
/**
 * print_list - functions that prints all the elements of a list_t list.
 * @h: list to be printed.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	int counter = 0;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		if (temp->str != NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
			counter++;
		}
		else
		{
			printf("[0] (nil)\n");
			counter++;
		}
	}
	return (counter);
}
