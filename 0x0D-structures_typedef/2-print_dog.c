#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog.
 * @d: pointer to the struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d != '\0')
	{
		if (d->name != '\0')
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age != '\0')
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner != '\0')
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");

	}
	else
	return;
}
