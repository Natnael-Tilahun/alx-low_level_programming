x#include "main.h"

/**
 * _calloc - allocates momory for an array
 *
 * @nmemb: number of elements
 * @size: bytes
 *
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
return (NULL);

while (i < nmemb * size)
p[i] = 0;

return (p);
}
