#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints the items in a list
 * @h: Hhead of the list
 * Return: Number of item in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
