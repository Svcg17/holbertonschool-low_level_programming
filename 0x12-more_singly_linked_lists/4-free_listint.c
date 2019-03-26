#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first element of a linked lists.
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
