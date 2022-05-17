#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - return a poiner of allocated momory
 * @b: size of memory
 *
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
void *n;
n = malloc(b);

if (n == NULL)
{
exit(98);
}
return (n);
}
