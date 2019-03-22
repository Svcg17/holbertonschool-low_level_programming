#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: beginning of linked list.
 * @str: string to be added and duplicated.
 * Return: address of the new elemnt, NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *cpy;
	int i = 0;

	cpy = strdup(str);
	if (new == NULL && cpy == NULL)
		return (NULL);

	while (cpy[i])
		i++;

	new->str = cpy;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
