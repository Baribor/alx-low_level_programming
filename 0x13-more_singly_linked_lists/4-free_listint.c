#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: Pointer to the head of the list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *currentHead;

	while (head)
	{
		currentHead = head->next;
		free(head);
		head = currentHead;
	}
}
