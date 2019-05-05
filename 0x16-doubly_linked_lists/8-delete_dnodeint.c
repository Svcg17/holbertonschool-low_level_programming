#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @index: index of the node that should be deleted
 * @head: pointer to a pointer to the first node of a linked list
 * Return: 1 if it succeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
	{
		if (current->next != NULL)
			current = current->next;
		else
			return (-1);
	}
	if (index == 0 && current == *head && (*head)->next == NULL)
	{
		*head = NULL;
		free(current);
		return (1);
	}
	if (index == 0 && current == *head)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
