#ifndef DOG_H
#define DOG_H

/**
 * struct dog - doggy
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: dog age
 */
typedef struct dog dog_t
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
