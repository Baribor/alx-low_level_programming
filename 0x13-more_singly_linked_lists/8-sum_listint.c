#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all data
 * @head: Head of the list
 * Return: The sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currentHead = head;

	while (currentHead)
	{
		sum += currentHead->n;
		currentHead = currentHead->next;
	}

	return (sum);
}
