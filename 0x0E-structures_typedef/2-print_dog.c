#include <stdio.h>
#include "dog.h"

/**
 * print_dog-is a function
 * @d:is a structure
 * Return:retyrn
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("owner: %s\n", d->owner ? d->owner : "(nil)");
}
