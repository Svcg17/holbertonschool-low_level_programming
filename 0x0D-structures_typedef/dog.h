#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog info.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif