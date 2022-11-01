#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees a dog structure.
 * @d: A dog structure
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(dog->owner);
		free(dog->owner);
		free(dog);
	}
}
