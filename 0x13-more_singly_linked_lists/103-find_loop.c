#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Prints a list with a loop
 * @head: Head of the list
 * Return: The length of the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowPointer, *fastPointer;

	slowPointer = fastPointer = head;

	while (slowPointer && fastPointer && fastPointer->next)
	{
		slowPointer = slowPointer->next;
		fastPointer = fastPointer->next->next;
		if (slowPointer == fastPointer)
		{
			slowPointer = head;
			break;
		}
	}

	if (!fastPointer || !fastPointer->next)
		return (NULL);

	while (slowPointer != fastPointer)
	{
		slowPointer = slowPointer->next;
		fastPointer = fastPointer->next;
	}

	return (fastPointer);
}
