#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *lastNode = *head;

	while (lastNode != NULL)
	{
		current_node = lastNode;
		lastNode = lastNode->next;
		free(current_node);
	}

	*head = NULL;
}
