#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog.
 * @d: pointer to the struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == '\0')
		return;
	if (d->name == '\0' || d->age == '\0' || d->owner == '\0')
		printf("(nil)");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
