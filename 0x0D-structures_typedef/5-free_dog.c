#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs.
 * @d: pointer to dog_t to be freed.
 */
void free_dog(dog_t *d)
{
	if (d != '\0')
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
