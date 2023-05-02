#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - Gets the node at given index
* @head: The head node
* @index: The index of the target node
* Return: The target node else NULL if it doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
