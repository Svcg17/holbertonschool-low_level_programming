#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns the sum of all the data of a linked list.
 * @head: pointer to a linked list.
 * Return: the sum of all the data of the list, or 0 is the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *t = head;
	int sum = 0;

	if (t == NULL)
		return (0);

	while (t != NULL)
	{
		sum = sum + t->n;
		t = t->next;
	}
	return (sum);
}
