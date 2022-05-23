#include "function_pointers.h"

/**
 * array_iterator - excutes a function given as a parameter on each
 * element of an array
 * @array: an array
 * @size: size of an array
 * @action: pointer to a function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action)
return;
for (i = 0; i < size; i++)
action(array[i]);
}