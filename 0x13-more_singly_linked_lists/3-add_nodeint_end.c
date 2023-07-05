#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add item to the end of the list
 * @head: Pointer to the pointer of the head
 * @n: The data of the new node
 * Return: The address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentHead;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	currentHead = *head;

	while (currentHead->next)
		currentHead = currentHead->next;

	currentHead->next = newNode;
	return (newNode);
}
