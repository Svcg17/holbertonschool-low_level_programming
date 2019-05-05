#include "lists.h"

/**
 * dlistint_len - function the number of elements in a linked list
 * @h: list to be counted
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
