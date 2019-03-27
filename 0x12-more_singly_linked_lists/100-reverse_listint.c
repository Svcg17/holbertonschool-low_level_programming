#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to a pointer to a list to be reversed.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t, *t2;

	if (*head == NULL)
		return (NULL);
	t = *head;
	while (t->next != NULL)
	{
		t2 = t->next;
		t->next = t2->next;
		t2->next = *head;
		*head = t2;
	}
	return (*head);
}
