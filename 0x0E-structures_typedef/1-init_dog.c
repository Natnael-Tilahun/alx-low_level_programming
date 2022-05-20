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
 * Return: always return 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;

return (0);
}
