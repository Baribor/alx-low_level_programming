#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Delete a node at a given index
* @head: Head node
* @index: Index of the target node
* Return: 1 if successful else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *previousNode = NULL;
	unsigned int i = 0;

	currentNode = *head;

	if (*head == NULL)
		return (-1);

	while (currentNode != NULL && i < index)
	{
		previousNode = currentNode;
		currentNode = currentNode->next;
		i++;
	}

	if (currentNode == NULL)
		return (-1);

	if (previousNode == NULL)
		*head = currentNode->next;
	else
		previousNode->next = currentNode->next;
	free(currentNode);
	return (1);
}
