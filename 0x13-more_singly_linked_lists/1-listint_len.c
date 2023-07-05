#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Gets the number of item in a list
 * @h: Head of the list
 * Return: Number of items
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
