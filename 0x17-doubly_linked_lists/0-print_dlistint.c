#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints the element in a doubly linked list
 * @h: Head of the list
 * Return: count of items in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *head = h;

	while (head)
	{
		count++;

		printf("%d\n", head->n);
		head = head->next;
	}
	return (count);
}
