#include <stdlib.h>
#include "main.h"

/**
 * init_dog - initializes a variable  of type struct dog
 *
 * @name: parameter to initialize dog.name
 * @age: parameter to initialize dog.age
 * @owner: parameter to initialize dog.owner
 * @d: pointer to struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
