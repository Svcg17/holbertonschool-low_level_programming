#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to a pointer to a list to be reversed.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev;

	current = *head;
	prev = (*head)->next;
	current->next = NULL;

	if (*head == NULL)
		return (NULL);

	while (prev != NULL)
	{
		*head = prev;
		prev = prev->next;
		(*head)->next = current;
		current = *head;
	}
	return (current);
}
