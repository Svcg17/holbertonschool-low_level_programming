#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linke list of integers in ascending
 * order using the Insertion sort algorithm.
 *
 * @list: pointer to the head of the doubly linked list to be used.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prevnode = NULL;

	if (list == NULL)
		return;
	current = *list;

	while(current)
	{
		prevnode = current->prev;
		while(prevnode)
		{
			if(prevnode->n < current->n)
			{
				if(current->next != NULL)
					current->next->prev = prevnode;
				current->next = prevnode;
				current->prev = prevnode->prev;
				prevnode->next = current;
				prevnode->prev->next = current;

				if (prevnode->prev)
				{
					prevnode->prev->next = current;
				}
				else
					*list = current;
			}
			else
				break;
			print_list(*list);
			prevnode = prevnode->prev;
			prevnode = prevnode->prev;
		}
	current = current->next;
	}
}
