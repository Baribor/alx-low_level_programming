#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a list with a loop
 * @head: Head of the list
 * Return: The length of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0, i;
	const listint_t *currentHead = head;
	const listint_t *loopHead = NULL;

	while (currentHead)
	{
		loopHead = head;
		for (i = 0; i < len; i++)
		{
			if (loopHead == currentHead)
			{
				printf("-> [%p] %d\n", (void *)currentHead, currentHead->n);
				return (len);
			}
			loopHead = loopHead->next;
		}
		len++;
		printf("[%p] %d\n", (void *)currentHead, currentHead->n);
		currentHead = currentHead->next;
	}

	return (len);
}
