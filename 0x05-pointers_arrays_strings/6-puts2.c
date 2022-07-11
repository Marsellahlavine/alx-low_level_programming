#include "main.h"
#include <string.h>

/**
 * puts2 - puts2 function
 * @str: str parameter
 */
void puts2(char *str)
{
int len, i;

len = strlen(str);
for (i = 0; 1 < len; i += 2)
_putchar(str[i]);
_putchar('\n');
}
