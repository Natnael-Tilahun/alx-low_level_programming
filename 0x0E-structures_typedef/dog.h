#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for dog struct
 *
 */

typedef struct dog dog_t;

/**
 * struct dog - structure that stores information about dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Discription: the struct which is called dog that stores the name, age
 * and owner of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
