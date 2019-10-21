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

	while ((*doggy).owner[nlen] != '\0')
		nlen++;
	while ((*doggy).owner[olen] != '\0')
		olen++;

	dogName = malloc(sizeof(char) * (nlen + 1));
	if (dogName == NULL)
	{
		free(dogName);
		free(doggy);
		return (NULL);
	}
	dogOwner = malloc(sizeof(char) * (olen + 1));
	if (dogOwner == NULL)
	{
		free(dogOwner);
		free(doggy);
		return (NULL);
	}
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	return (doggy);
}
