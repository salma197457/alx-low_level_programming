#include <stddef.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable
 * @d:v1
 * @name:v2
 * @age:v3
 * @owner:v4
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
