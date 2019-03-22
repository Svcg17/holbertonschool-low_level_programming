#include "lists.h"
#include <string.h>
/**
 * free_list - frees a list_t list
 * @head: list_t pointer.
 */
void free_list(list_t *head)
{
	list_t *last = head;
	list_t *next;

	if (head == NULL)
		return;
	while (last != NULL)
	{
		next = last->next;
		free(last);
		last = next;
	}
	head = NULL;
}
