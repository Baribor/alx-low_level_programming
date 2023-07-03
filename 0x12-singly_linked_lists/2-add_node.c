#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *newStr;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newStr = strdup(str);
	if (!newStr)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = newStr;
	newNode->len = strlen(newStr);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
