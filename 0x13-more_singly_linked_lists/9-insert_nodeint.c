#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node a an index
 * @head: Pointer to the head pointer
 * @idx: Index to add the new node
 * @n: Data of the new node
 * Return: The new node added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *prevNode;
	listint_t *currentNode = *head;
	unsigned int count = 0;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = currentNode;
		*head = newNode;
		return (newNode);
	}

	while (currentNode)
	{
		if (count == idx)
		{
			prevNode->next = newNode;
			newNode->next = currentNode;
			return (newNode);
		}

		prevNode = currentNode;
		currentNode = currentNode->next;
		count++;
	}

	if (idx == count)
	{
		prevNode->next = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	return (NULL);
}
