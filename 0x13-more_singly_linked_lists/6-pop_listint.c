#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of the list
 * @head: Pointer to the head pointer
 * Return: The head data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *currentHead;

	if (!*head)
		return (0);

	data = (*head)->n;
	currentHead = (*head)->next;
	free(*head);
	*head = currentHead;
	return (data);
}
