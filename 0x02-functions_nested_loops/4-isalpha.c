#include "main.h"

int _isalpha(int c){
char c;
 if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
return (0);
}
