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
	listint_t *newNode, *currentNode;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;

	while (currentNode != NULL && i < idx - 1)
	{
		currentNode = currentNode->next;
		i++;
	}

	if (currentNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
