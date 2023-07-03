#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints a linked list
 * @h: Head of the list
 * Return: The size of the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}

	return (n);
}
