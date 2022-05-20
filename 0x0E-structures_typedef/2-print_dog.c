#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct variables
 * @d: struct dog
 * Retrun: nothing
 */

void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
}
