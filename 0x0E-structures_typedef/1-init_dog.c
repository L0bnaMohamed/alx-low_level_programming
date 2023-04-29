#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog-function
 * @d:structure
 * @name:char
 * @age:int
 * @owner:char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
