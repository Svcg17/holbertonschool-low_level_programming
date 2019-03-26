#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to a list to print all elements from.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int counter = 0;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
		counter++;
	}
	return (counter);
}
