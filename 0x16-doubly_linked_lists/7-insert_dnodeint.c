#include "lists.h"
#include <stdio.h>
/**
 * addnode - adds node
 * @new: new node to add
 * @current: node previous to new node
 */
void addnode(dlistint_t *new, dlistint_t *current)
{

	new->next = current->next;
	current->next->prev = new;
	current->next = new;
	new->prev = current;
}
/**
 * appendnodeend - appends node at the end of list
 * @new: new node to add
 * @current: node previous to new node
 */
void appendnodeend(dlistint_t *new, dlistint_t *current)
{
	new->prev = current;
	current->next = new;
	new->next = NULL;
}
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the pointer to the first node of a list.
 * @idx: index of the list where the new node should be added.
 * @n: data of list
 * Return: address of the new node, or NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i;

	if (h == NULL || new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	else if (*h == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (current->next != NULL)
			current = current->next;
		else
			return (NULL);
	}
	if (current->next == NULL)
	{
		appendnodeend(new, current);
		return (new);
	}
	addnode(new, current);
	return (new);
}
