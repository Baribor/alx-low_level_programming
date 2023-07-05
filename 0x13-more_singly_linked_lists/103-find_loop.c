#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Prints a list with a loop
 * @head: Head of the list
 * Return: The length of the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *currentNode = head;

	while (currentNode)
	{
		if (currentNode->next >= currentNode)
			return (currentNode->next);
		currentNode = currentNode->next;
	}

	return (currentNode);
}
