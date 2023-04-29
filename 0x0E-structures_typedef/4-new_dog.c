#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog-function
 * @name:char
 * @age:float
 * @owner:char
 * Return:return
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (NULL);
	}

	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
