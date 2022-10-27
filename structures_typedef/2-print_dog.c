#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A function that prints a dog structure.
 * @d: A dog structure
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");
		if (&d->age != NULL)
			printf("Age: %.1f\n", d->age);
		else
			printf("Age: (nil)");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
