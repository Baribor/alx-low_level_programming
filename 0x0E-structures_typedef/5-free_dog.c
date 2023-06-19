#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the memory occupied by a dog object
 * @d: pointer to the dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
