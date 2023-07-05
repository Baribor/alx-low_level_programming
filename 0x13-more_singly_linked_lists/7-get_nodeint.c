#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get node at an index
 * @head: Head of the list
 * @index: The index to find the node
 * Return: The node at inde {index}
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *currentNode = head;

	while (currentNode)
	{
		if (count == index)
			return (currentNode);
		currentNode = currentNode->next;
		count++;
	}

	return (NULL);
}
