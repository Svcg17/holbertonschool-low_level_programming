#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element of a list.
 * @n: element to be inserted at the end of a list.
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *tracer = *head;

	if (newnode == NULL)
		return (newnode);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tracer->next != NULL)
	{
		tracer = tracer->next;
	}

	tracer->next = newnode;
	return (newnode);
}
