#include "lists.h"

/**
 * sum_dlistint - Sums up the data in a doubly linked list
 * @head: Head of the list
 * Return: sum of data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
