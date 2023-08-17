#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node to the end of the list
 * @head: The head of the list
 * @n: The new node
 * Return: Pointer to the new node else NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	current_head = *head;
	if (!current_head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current_head->next)
			current_head = current_head->next;
		new_node->prev = current_head;
		current_head->next = new_node;
	}

	return (new_node);
}
