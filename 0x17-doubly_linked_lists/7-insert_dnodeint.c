#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at idx
 * @h: Head of the list
 * @idx: Index to add the new node
 * @n: The new node data
 * Return: Pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int count = 0;

	if (!h || (!*h && idx > 0))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current)
	{
		if (count == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
