#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Removes a node at an index
 * @head: Head of the list
 * @index: Index of the node to remove
 * Return: 1 if successful else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (!head || !*head)
		return (-1);

	current = *head;
	while (current)
	{
		if (count == index)
		{
			if (!current->prev)
				*head = current->next;
			else
				current->prev->next = current->next;

			if (current->next)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}

		current = current->next;
		count++;
	}

	return (-1);
}
