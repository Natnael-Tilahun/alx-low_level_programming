#include "main.h"

/**
* islower - checks lowercase 
* @c: contains value to be checked
* Return 0: Always 0.
*/

int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
return (0);
}
