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
	int nlen = 0, olen = 0, i;
	dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	while (name[nlen] != '\0')
		nlen++;
	while (owner[olen] != '\0')
		olen++;

	doggy->name = malloc(sizeof(char) * (nlen + 1));
	doggy->owner = malloc(sizeof(char) * (olen + 1));

	if (doggy->owner == NULL || doggy->name == NULL)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = name[i];
	for (i = 0; i < olen; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = owner[i];
	doggy->age = age;
	return (doggy);
}
