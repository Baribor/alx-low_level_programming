#include <stdio.h>
#include "lists.h"

/**
 * list_len - Gets the numbe of item in a list
 * @h: Head of the list
 * Return: The numbe of item in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
