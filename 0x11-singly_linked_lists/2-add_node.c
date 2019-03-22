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
	int len = strlen(str);

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
