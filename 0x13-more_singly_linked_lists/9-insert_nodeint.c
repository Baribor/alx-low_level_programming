#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given index
* @head: The head node
* @idx: The index to insert the node
* @n: Value of the new node
* Return: The address if the new node else NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode, *previousNode = NULL;
	unsigned int i = 0;

	newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	currentNode = *head;

	while (currentNode != NULL)
	{
		if (i == idx)
		{
			newNode->next = currentNode;
			if (previousNode != NULL)
				previousNode->next = newNode;
			return (newNode);
		}

		previousNode = currentNode;
		currentNode = currentNode->next;
		i++;
	}

	if (i == idx)
	{
		previousNode->next = newNode;
		newNode->next = NULL;
		return (newNode);
	}

	return (NULL);
}
