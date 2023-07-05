#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function that free a list
 * @head: Pointer to the head pointer
 * Return: Void always
 */
void free_listint2(listint_t **head)
{
	listint_t *currentHead;

	if (!head)
		return;

	while (*head)
	{
		currentHead = (*head)->next;
		free(*head);
		*head = currentHead;
	}
}
