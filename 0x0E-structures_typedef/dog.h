#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - struct that stores information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: struct that stores the name, age, and owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*
 * dog_t - typedef (new name) for struct "dog"
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
