#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a list with a loop
 * @head: Head of the list
 * Return: The length of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	const listint_t *currentNode = head;

	while (currentNode)
	{
		len++;
		printf("[%p] %d\n", (void *)currentNode, currentNode->n);
		if (currentNode->next >= currentNode)
			return (len);
		currentNode = currentNode->next;
	}

	return (len);
}
