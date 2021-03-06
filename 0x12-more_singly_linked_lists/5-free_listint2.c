#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the first element of a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
}
