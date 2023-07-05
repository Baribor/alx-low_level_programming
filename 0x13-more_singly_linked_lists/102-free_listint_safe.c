#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a list with a loop
 * @h: Pointer to the head pointer
 * Return: Length of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *currentNode;

	while (*h)
	{
		currentNode = (*h)->next;
		len++;
		if (currentNode >= *h)
		{
			free(*h);
			*h = NULL;
			return (len);
		}

		free(*h);
		*h = currentNode;
	}

	return (len);
}
