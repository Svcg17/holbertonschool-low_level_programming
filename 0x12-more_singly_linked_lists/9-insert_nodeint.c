#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to a list to be used.
 * @idx: index of the list where the new node should be added.
 * @n: element (int) to be added.
 * Return: address of the new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int i;

	if (newnode == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (current->next != NULL)
			current = current->next;
		else
			return (NULL);
	}
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
