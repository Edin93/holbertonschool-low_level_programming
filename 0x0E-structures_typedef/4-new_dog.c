#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog's pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int nlen = 0, olen = 0;
	char *dogName, *dogOwner;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	while ((*doggy).owner[nlen] != '\0')
		nlen++;
	while ((*doggy).owner[olen] != '\0')
		olen++;

	dogName = malloc(sizeof(char) * nlen);
	if (dogName == NULL)
		free(dogName);
	dogOwner = malloc(sizeof(char) * olen);
	if (dogOwner == NULL)
		free(dogOwner);
	return (doggy);
}
