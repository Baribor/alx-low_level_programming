#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode;
	listint_t *nextNode;

	if (head == NULL || *head == NULL)
		return;

	currentNode = *head;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}

	*head = NULL;
}
