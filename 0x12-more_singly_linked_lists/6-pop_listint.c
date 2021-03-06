#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - function that deletes the head node of a linked list.
 * @head: pointer to a pointer to the first element in a list.
 * Return: the head node's data(n) or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int m;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		t = *head;
		m = t->n;
		*head = t->next;
		free(t);
	}
	return (m);
}
