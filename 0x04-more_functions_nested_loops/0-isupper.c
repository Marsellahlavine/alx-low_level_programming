#include "main.h"
#include <stdio.h>

/**
 * _isupper -> this is a function to check upper case alphabet
 * @c: an integer paramer
 *  Return: success
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);

return (c >= 65 && c <= 90);
return (c >= 'A' && c <= 'Z');
}
