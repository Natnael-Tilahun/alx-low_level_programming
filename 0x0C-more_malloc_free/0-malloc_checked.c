#include "main.h"

/**
 * malloc_checked - return an array for prints a string
 * @b: size of memory
 *
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
void *n;
n = malloc(b);

if (b == NULL)
{
exit(98);
}
return (n);
}
