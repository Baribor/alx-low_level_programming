#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - Prints linkedlist with loop
* @head: Pointer to the head node
* Return: number of node in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	const listint_t *currentNode = head, *nextNode = NULL;

	while (currentNode != NULL)
	{
		c++;
		printf("[%p] %d\n", (void *)currentNode, currentNode->n);
		nextNode = currentNode->next;

		if (nextNode >= currentNode)
		{
			printf("-> [%p] %d\n", (void *)nextNode, nextNode->n);
			break;
		}

		currentNode = nextNode;
	}

	return (c);
}
