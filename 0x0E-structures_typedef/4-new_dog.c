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
	int sn = strlen(name);
	int so = strlen(owner);
	char *nsn = (char *)malloc((sn * sizeof(char)) + 1);
	char *nso = (char *)malloc((so * sizeof(char)) + 1);

	if (!(nsn && nso))
		return (NULL);

	nsn = strcpy(nsn, name);
	nso = strcpy(nso, owner);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = nsn;
	d->age = age;
	d->owner = nso;
	return (d);
}

