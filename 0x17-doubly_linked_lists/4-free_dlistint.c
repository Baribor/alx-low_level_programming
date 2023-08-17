#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a double linked list
 * @head: Head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
	head = NULL;
}
