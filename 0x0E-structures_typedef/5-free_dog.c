#include <stdio.h>
#include "dog.h"
/**
 * free_dog - free dogs
 * @d: dog's pointer.
 */
void free_dog(dog_t *d)
{
	free(d.name);
	free(d.age);
	free(d.owner);
	free(d);
}
