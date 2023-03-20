#include "doh.h"
#include <stdlib.h>

/**
 * int_dog - initialize a variable a variable of type struct dog
 * @d: the dog to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

		d = malloc(sizeof(struck dog));
		d->name = name;
		d->age = age;
		d->owner = owner;

}
