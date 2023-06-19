#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1, len2;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	len1 = _strlen(name);
	new_dog->name = malloc(sizeof(char) * len1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	len2 = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * len2 + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->owner);
		return (null);
	}
	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);
	return (new_dog);
}

/**
 * _strlen - calculate length of string
 * @s: pointer to string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);	
}

/**
 * _strcpy - copy string
 * @dest: first string
 * @src: second string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
