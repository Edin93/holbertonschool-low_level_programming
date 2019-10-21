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
	int nlen = 0, olen = 0, i;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	while ((*doggy).owner[nlen] != '\0')
		nlen++;
	while ((*doggy).owner[olen] != '\0')
		olen++;

	doggy->name = malloc(sizeof(char) * (nlen + 1));
	if (doggy->name == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(sizeof(char) * (olen + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];
	doggy->age = age;
	for (i = 0; i < olen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
