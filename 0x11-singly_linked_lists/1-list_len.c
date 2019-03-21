#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the number of elements in a list_t list.
 * @h: linked list to be used to return it's elements.
 * Return: total elements of h list.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	int counter = 0;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		if (temp->str != NULL)
		{
			counter++;
		}
		else
		{
			counter++;
		}
	}
	return (counter);
}
