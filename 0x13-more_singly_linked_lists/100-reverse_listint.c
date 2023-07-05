#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 * @head: Pointer to the head pointer
 * Return: The head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNode;
	listint_t *prevNode = NULL;

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;
	return (prevNode);
}
