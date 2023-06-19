#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function initialize variable
 * of type struct dog
 * @d: pointer to structure
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
