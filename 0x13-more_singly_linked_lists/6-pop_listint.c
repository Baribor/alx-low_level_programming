#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - removes the head of a linked list
* @head: pointer to the head node
* Return: Value of the head node
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *newHead;

	if (*head == NULL)
		return (0);

	newHead = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = newHead;

	return (n);
}
