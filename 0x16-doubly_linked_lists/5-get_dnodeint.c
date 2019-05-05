#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to list
 * @index: index of the node
 * Return: the node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *t = head;
	unsigned int i = 0;

	while (head->next != NULL)
	{
		if (index == i)
			return (t);
		t = t->next;
		i++;
	}
	return (NULL);
}
