#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs.
 * @d: pointer to dog_t to be freed.
 */
void free_dog(dog_t *d)
{
	free(d->n);
	free(d->o);
	free(d);
}
