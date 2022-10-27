#ifndef dog_h
#define dog_h
#include <unistd.h>
/**
 * struct dog - A dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the dog's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
