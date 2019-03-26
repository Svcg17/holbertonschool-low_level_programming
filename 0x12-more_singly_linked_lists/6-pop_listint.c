#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - function that deletes the head node of a linked list.
 * @head: pointer to a pointer to the first element in a list.
 * Return: the head node's data(n) or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *t = *head;
	listint_t *t2;
	int m = (*head)->n;

	if (t == NULL)
	{
		return (0);
	}
	t2 = t->next;
	free(t);
	*head = t2;
	return (m);
}
