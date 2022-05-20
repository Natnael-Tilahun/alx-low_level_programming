#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
{
printf("Name: nil");
}
printf("Name: %s\n Age: %.f\n Owner: %s", d->name, d->age, d->owner);
}
}
