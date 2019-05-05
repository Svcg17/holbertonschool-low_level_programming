#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
