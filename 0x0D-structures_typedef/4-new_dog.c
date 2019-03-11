#include "dog.h"
#include "stdlib.h"
/**
 * new_dog - function that creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: new pointer to dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == '\0')
		return ('\0');
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
