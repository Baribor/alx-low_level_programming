#include <stdio.h>
#include "lists.h"

/**
* print_listint - Prints the items in a linked list
* @h: The head of the list
* Return: The number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
