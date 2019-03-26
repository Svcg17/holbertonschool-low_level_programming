#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes node at index of a linked list.
 * @head: pointer to a pointer to a list to the first element of a list.
 * @index: index of the node that should be deleted.
 * Return: returns 1, if failed returns -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = t->next;
		free(t);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (t->next != NULL)
			t = t->next;
		else
			return (-1);
	}
	next = t->next->next;
	free(t->next);
	t->next = next;
	return (0);
}
