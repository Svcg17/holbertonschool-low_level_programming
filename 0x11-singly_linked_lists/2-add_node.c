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

	if (new == '\0')
		return ('\0');
	cpy = strdup(str);
	while (cpy[i])
		i++;
	if (cpy == '\0' && str != '\0')
	{
		free(new);
		str++;
	return ('\0');
	}
	new->str = cpy;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
