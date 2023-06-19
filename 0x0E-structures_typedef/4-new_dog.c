#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int sn, so;
	char *nsn;
	char *nso;

	if (!name)
	{
		nsn = NULL;
	}
	else
	{
		sn = strlen(name);
		nsn = (char *)malloc((sn * sizeof(char)) + 1);
		if (!nsn)
			return (NULL);
		nsn = strcpy(nsn, name);
	}

	if (!owner)
	{
		nso = NULL;
	}
	else
	{
		so = strlen(owner);
		nso = (char *)malloc((so * sizeof(char)) + 1);
		if (!nso)
			return (NULL);
		nso = strcpy(nso, name);
	}

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = nsn;
	d->age = age;
	d->owner = nso;
	return (d);
}
