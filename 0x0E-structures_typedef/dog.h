#ifndef DOG_H
#define DOG_H
/**
 * struct dog-a new type
 * @name: var1
 * @age: var2
 * @owner: var3
 *
 * Description: a new type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
