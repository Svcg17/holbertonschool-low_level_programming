#include "lists.h"
#include <string.h>
/**
 * free_list - frees a list_t list
 * @head: list_t pointer.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->str)
		{
			free(head->str);
		}

		free(head);
		head = head->next;
	}
}
