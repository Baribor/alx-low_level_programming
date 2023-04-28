#include <stdio.h>
#include "lists.h"

/**
* list_len - returns the number of nodes in a linked list
* @h: the head of the linked list
* Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
