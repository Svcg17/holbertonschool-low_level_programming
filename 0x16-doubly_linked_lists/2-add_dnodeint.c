#include "lists.h"
/**
 * add_dnodeint - add a new at the beginning of a list
 * @head: pointer to the first node in a list
 * @n: data of list to be added.
 * Return: address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (head == NULL || new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
