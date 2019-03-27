#include "lists.h"
#include <stdio.h>
/**
 * _reverse - reverses a listint_t linked list.
 * @head: pointer to a pointer to a list to be reversed.
 */
void _reverse(listint_t **head)
{
	listint_t *t = NULL;
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		t = current->next;
		current->next = prev;
		prev = current;
		current = t;
	}
	*head = prev;
}
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to a pointer to a list to be reversed.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	_reverse(&(*head));
	return (*head);
}
