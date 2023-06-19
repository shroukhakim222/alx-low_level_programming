#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - structure for dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the ownerr
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
