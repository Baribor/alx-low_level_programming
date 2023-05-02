#include <stdio.h>
#include "lists.h"

/**
* listint_len - returns the number of nodes in a linked list
* @h: the head of the linked list
* Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
