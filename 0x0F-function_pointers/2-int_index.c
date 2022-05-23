#include "function_pointers.c"

/**
 * int_index - that searches an integer
 * @array: array pointer
 * @size: size of an array
 * @cmp: pointer to a function to be used to compare values
 *
 * Return: index of the first element for which function cmp doesnot return 0
 * or return -1 if no match is found or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size < 0)
return (-1);

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (array[i]);
}
}
return (-1);
}