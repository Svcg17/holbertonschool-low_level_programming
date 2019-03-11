#include "dog.h"
#include "stdlib.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: string to make a copy of.
 *
 * Return: NULL if size = 0, pointer to the copied string  or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == '\0')
		return ('\0');

	for (i = 0; str[i]; i++)
		;

	s = malloc(sizeof(char) * (i + 1));

	if (s == '\0')
	{
		return ('\0');
	}

	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}


	return (s);
}
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
	char *n;
	char *o;

	new = malloc(sizeof(dog_t));
	if (new == '\0')
		return ('\0');
	n = _strdup(name);
	if (n == '\0' && name != '\0')
	{
		free(new);
		return('\0');
	}
	o = _strdup(owner);
	if (o == '\0' && owner != '\0')
	{
		free(new);
		free(n);
		return('\0');
	}

	new->name = n;
	new->age = age;
	new->owner = o;
	return (new);
}
