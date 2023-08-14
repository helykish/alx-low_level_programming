#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - ariable type struct dog
 * @d: init pointer to struct dog
 * @name: init name
 * @age: initialize age
 * @owner: owner to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
