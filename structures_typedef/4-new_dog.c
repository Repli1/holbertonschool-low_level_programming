#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 * Return: The new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int i = 0;

	int j = 0;

	char *namedup = name;

	char *ownerdup = owner;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	dog = malloc(i + j + 2 + sizeof(float));

	if (dog == NULL)
	{
		free(dog->name);
		free(dog->owner);
		return (NULL);
	}

	dog->name = namedup;
	dog->age = age;
	dog->owner = ownerdup;

	return (dog);
}
