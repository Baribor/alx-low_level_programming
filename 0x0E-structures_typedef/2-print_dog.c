#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog object
 * @d: The dog object
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner ? d->owner
								   : "(nil)");
}
