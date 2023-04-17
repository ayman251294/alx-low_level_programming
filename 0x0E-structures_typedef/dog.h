#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic info for a dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
