#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Gets the number of items in a linked list
 * @h: head of the list
 * Return: The number of items in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}
