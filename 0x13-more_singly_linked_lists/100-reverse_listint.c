#include <stdio.h>
#include "lists.h"

/**
* reverse_listint - Reverses a linkedlist
* @head: Double pointer to the head node
* Return:  The new head node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode = NULL, *currentNode, *nextNode;

	if (head == NULL || *head == NULL)
		return (NULL);

	currentNode = *head;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		currentNode->next = previousNode;
		previousNode = currentNode;
		currentNode = nextNode;
	}
	*head = previousNode;
	return (*head);
}
