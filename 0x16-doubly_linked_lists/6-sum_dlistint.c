#include "lists.h"

/**
 * sum_dlistint - sums all the data of a list
 * @head: pointer to a list
 * Return: sum of all data or zero.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *t = head;

	if (t == NULL)
		return (0);

	while (t != NULL)
	{
		sum = sum + t->n;
		t =  t->next;
	}
	return (sum);
}
