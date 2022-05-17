#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return a pointer of a reserved memory
 *
 * @b: unsigned int
 * Return : a pointer
 */

void *malloc_checked(unsigned int b)
{
unsigned int *n;
n = malloc(sizeof(int) * b);
if (b == NULL)
return (98);
}
