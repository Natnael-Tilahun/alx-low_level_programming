#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str : string
 *
 * Return: pointer of an array of chars
 *
 */

char *_strdup(char *str)
{

unsigned int i, j;
char *cr;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
  ;
cr = (char *)malloc(sizeof(char) * (i + 1));
if (cr == NULL)
return (NULL);
for (j = 0; j <= i; j++)
cr[j] = str[j];

return (cr);

}
