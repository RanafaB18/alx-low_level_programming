#include "dog.h"

/**
 * init_dog - initializing the struct "dog"
 * @d : pointer to struct "dog"
 * @name : name of dog
 * @age : age of dog
 * @owner : owner of dog
 * Return: 0 if successful
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
