#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to a struct, out list.
 * Return: number of elements of linked list.
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
