#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint__at_index - Deletes a node at an index
 * @head: Pointer to the head pointer
 * @index: Index of the node to delete
 * Return: 1 if successful else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode = *head;
	listint_t *prevNode;
	unsigned int count = 0;

	if (!currentNode)
		return (-1);

	if (index == 0)
	{
		currentNode = currentNode->next;
		free(*head);
		*head = currentNode;
		return (1);
	}

	while (currentNode)
	{
		if (index == count)
		{
			prevNode->next = currentNode->next;
			free(currentNode);
			return (1);
		}

		prevNode = currentNode;
		currentNode = currentNode->next;
		count++;
	}
	return (-1);
}
