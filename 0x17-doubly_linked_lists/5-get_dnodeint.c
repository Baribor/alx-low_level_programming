#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a double linked list
 * @head: Head of the list
 * @index: The index of the target node
 * Return: The target node, else NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	current = head;
	while (current)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
