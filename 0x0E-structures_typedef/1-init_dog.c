#include "dog.h"

/**
 * init_dog - initialize a struct
 *
 * @d: a struct
 * @name: cha name
 * @age: float age
 * @owner: char owner
 *
 *
 * Return: return nothing
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
