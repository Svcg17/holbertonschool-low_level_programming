#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list.
 * @head: pointer to the first element of the list.
 * @index: index of the node, starting at 0.
 * Return: the nth node of the list, if node doesn't exist return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = head;
	unsigned int i = 0;

	while (t != NULL)
	{
		if (i == index)
			return (t);
		i++;
		t = t->next;
	}
	return (NULL);
}
