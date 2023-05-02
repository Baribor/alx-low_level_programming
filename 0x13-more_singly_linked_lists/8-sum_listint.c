#include <stdio.h>
#include "lists.h"

/**
* sum_listint - Get the sum of all values of nodes in a linkedlist
* @head: The head node
* Return: The sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
